#include <iostream>
#include <bitset>
using namespace std;

int AND(int num1, int num2)
{
    return num1 & num2; // Performs bitwise AND operation between num1 and num2
}

int OR(int num1, int num2)
{
    return num1 | num2; // Performs bitwise OR operation between num1 and num2
}

int XOR(int num1, int num2)
{
    return num1 ^ num2; // Performs bitwise XOR operation between num1 and num2
}

int NOT(int num1)
{
    return ~num1; // Performs bitwise NOT operation on num1
}

int LEFT_SHIFT(int num)
{
    // a << b is equivalent to a * 2^b
    return num << 2; // Left shifts the bits of num by 2 positions
}

int RIGHT_SHIFT(int num)
{
    // a >> b is equivalent to a / (2^b)
    return num >> 2; // Right shifts the bits of num by 2 positions
}

string odd_even(int num)
{
    return (num & 1 ? "ODD" : "EVEN"); // Checks if the least significant bit of num is set or not
}

int get_ith_bit(int num, int i)
{
    int mask = (1 << i);             // Creates a mask with the i-th bit set to 1
    return (num & mask) > 0 ? 1 : 0; // Returns the value of the i-th bit of num
}

void set_ith_bit(int num, int i)
{
    int mask = (1 << i); // Creates a mask with the i-th bit set to 1
    num = num | mask;    // Sets the i-th bit of num to 1
    // Example:
    // Before Operation : 5 (binary: 0101)
    // After Operation : 7 (binary: 0111)
}

void toggleBit(int num, int i)
{
    int mask = (1 << i); // Creates a mask with the i-th bit set to 1
    num = num ^ mask;    // Toggles the i-th bit of num
    // Example:
    // Before Operation : 5 (binary: 0101)
    // After Operation : 7 (binary: 0111)
}

void clearBit(int &num, int i)
{
    int mask = ~(1 << i); // Creates a mask with the i-th bit set to 0 and all other bits set to 1
    num = num & mask;     // Clears the i-th bit of num
    // Example:
    // Before Operation : 5 (binary: 0101)
    // After Operation : 4 (binary: 0100)
}

void updateIthBit(int n, int i, int v)
{
    clearBit(n, i);      // Clears the i-th bit of n
    int mask = (v << i); // Creates a mask with the value v shifted to the i-th position
    n = n | mask;        // Updates the i-th bit of n with the value v
    cout << n << endl;
}

void clearLastIBits(int n, int i)
{
    int mask = ~((1 << i) - 1); // Creates a mask with the last i bits set to 0 and all other bits set to 1
    n = n & mask;               // Clears the last i bits of n
    // Example:
    // Before Operation : 5 (binary: 0101)
    // After Operation : 4 (binary: 0100)
}

void clearBitsInRange(int n, int i, int j)
{
    int a = (~0) << (j + 1); // Creates a mask with all bits from j+1 to the most significant bit set to 1 and all other bits set to 0
    int b = (1 << i) - 1;    // Creates a mask with all bits from 0 to i-1 set to 1 and all other bits set to 0
    int mask = a | b;        // Combines the masks a and b to create the final mask
    n = n & mask;            // Clears the bits in the range from i to j of n
    // Example:
    // Clearing Bits In Range :
    // Before Operation : 7 (binary: 0111)
    // After Operation : 4 (binary: 0100)
}

bool isPowerOfTwo(int n)
{
    return ((n & (n - 1)) == 0); // Checks if n is a power of two
}

void countSetBits(int num)
{
    bitset<32> b(num);
    // we can also use __builtin_popcount(num) to count number of set bit in the number
    // cout << __builtin_popcount(num) << endl;
    cout << "Set bit in Number " << num << " is " << b.count() << endl;
}

void convertToDecimal(string binary)
{
    int twoPower = 1, decimalNum = 0;
    for (int i = binary.size() - 1; i >= 0; i--)
    {
        if (binary[i] == '1')
        {
            decimalNum += twoPower;
        }
        twoPower = twoPower << 1;
    }

    cout << decimalNum << endl;
}

string decimalToBinary(int decimal)
{
    string binary;

    if (decimal == 0)
    {
        binary = "0";
    }
    else
    {
        while (decimal > 0)
        {
            // Get the least significant bit
            int bit = decimal % 2;

            // Prepend the bit to the binary string
            binary = to_string(bit) + binary;

            // Shift the number to the right by dividing by 2
            decimal /= 2;
        }
    }

    return binary;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    cout << "AND : " << AND(num1, num2) << "\n";
    cout << "OR : " << OR(num1, num2) << "\n";
    cout << "XOR : " << XOR(num1, num2) << "\n";
    cout << "NOT : " << NOT(num1) << "\n";
    cout << "LEFT SHIFT : " << LEFT_SHIFT(num1) << "\n";
    cout << "RIGHT SHIFT : " << RIGHT_SHIFT(num1) << "\n";
    cout << odd_even(num1) << endl;
    cout << get_ith_bit(5, 2) << endl;
    set_ith_bit(5, 1);
    toggleBit(5, 1);
    clearBit(num1, 0);
    updateIthBit(num2, 1, 1);
    clearLastIBits(5, 1);
    clearBitsInRange(7, 1, 2);
    cout << isPowerOfTwo(num1) << endl;
    countSetBits(20);
    convertToDecimal("01010101");

    return 0;
}

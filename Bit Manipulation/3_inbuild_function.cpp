#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 12; // 1100 in binary

    // ffs function
    int index = ffs(num);
    cout << "The first set bit in " << bitset<8>(num) << " is at index " << index << endl;
    // Output: The first set bit in 00001100 is at index 3

    // __builtin_popcount function
    int count = __builtin_popcount(num);
    cout << "The number of set bits in " << bitset<8>(num) << " is " << count << endl;
    // Output: The number of set bits in 00001100 is 2

    // __builtin_ctz function
    int ctz = __builtin_ctz(num);
    cout << "The number of trailing zeros in " << bitset<8>(num) << " is " << ctz << endl; 
    // Output: The number of trailing zeros in 00001100 is 2

    // __builtin_clz function
    int clz = __builtin_clz(num);
    cout << "The number of leading zeros in " << bitset<8>(num) << " is " << clz << endl; 
    // Output: The number of leading zeros in 00001100 is 28 (assuming 32-bit int)

    // Bitwise AND operator
    int mask = 7; // 111 in binary
    int result = num & mask;
    cout << bitset<8>(num) << " AND " << bitset<8>(mask) << " = " << bitset<8>(result) << endl; 
    // Output: 00001100 AND 00000111 = 00000100

    // Bitwise OR operator
    mask = 5; // 101 in binary
    result = num | mask;
    cout << bitset<8>(num) << " OR " << bitset<8>(mask) << " = " << bitset<8>(result) << endl; 
    // Output: 00001100 OR 00000101 = 00001101


    // Bitwise XOR operator
    mask = 10; // 1010 in binary
    result = num ^ mask;
    cout << bitset<8>(num) << " XOR " << bitset<8>(mask) << " = " << bitset<8>(result) << endl; 
    // Output: 00001100 XOR 00001010 = 00000110

    // Bitwise NOT operator
    result = ~num;
    cout << "NOT " << bitset<8>(num) << " = " << bitset<8>(result) << endl; 
    // Output: NOT 00001100 = 11110011 (assuming 8-bit int)

    // Left shift operator
    result = num << 2;
    cout << bitset<8>(num) << " shifted left by 2 bits = " << bitset<8>(result) << endl; 
    // Output: 00001100 shifted left by 2 bits = 00110000

    // Right shift operator
    result = num >> 2;
    cout << bitset<8>(num) << " shifted right by 2 bits = " << bitset<8>(result) << endl; 
    // Output: 00001100 shifted right by 2 bits = 00000011

    return 0;
}

## Bitwise Operators:

There are different bitwise operations used in the bit manipulation. These bit operations operate on the individual bits of the bit patterns. Bit operations are fast and can be used in optimizing time complexity. Some common bit operators are:

### NOT ( ~ ) : 

- Bitwise NOT is an unary operator that flips the bits of the number i.e., if the ith bit is 0, it will change it to 1 and vice versa. Bitwise NOT is nothing but simply the one’s complement of a number. Lets take an example.
    - N = 5 = (101)2
    - ~N = ~5 = ~(101)<sub>2</sub>= (010)<sub>2</sub> = 2

### AND ( & ) : 

- Bitwise AND is a binary operator that operates on two equal-length bit patterns. If both bits in the compared position of the bit patterns are 1, the bit in the resulting bit pattern is 1, otherwise 0.
    - A = 5 = (101)<sub>2</sub>, 
    - B = 3 = (011)<sub>2</sub>, 
    - A & B = (101)<sub>2</sub> & (011)<sub>2</sub> = (001)<sub>2</sub> = 1

### OR ( | ) :

- Bitwise OR is also a binary operator that operates on two equal-length bit patterns, similar to bitwise AND. If both bits in the compared position of the bit patterns are 0, the bit in the resulting bit pattern is 0, otherwise 1.
    - A = 5 = (101)<sub>2</sub>,  
    - B = 3 = (011)<sub>2</sub>,
    - A | B = (101)<sub>2</sub> | (011)<sub>2</sub> = (111)<sub>2</sub> = 7

### XOR ( ^ ): 
- Bitwise XOR also takes two equal-length bit patterns. If both bits in the compared position of the bit patterns are 0 or 1, the bit in the resulting bit pattern is 0, otherwise 1.
    - A = 5 = (101)2 , 
    - B = 3 = (011)2
    - A ^ B = (101)<sub>2</sub> ^ (011)<sub>2</sub> = (110)<sub>2</sub> = 6

### Left Shift ( << ) : 
- Left shift operator is a binary operator which shift the some number of bits, in the given bit pattern, to the left and append 0 at the end. Left shift is equivalent to multiplying the bit pattern with 
 ( if we are shifting k bits ).
    - 1 << 1 = 2 = 2<sup>1</sup>
    - 1 << 2 = 4 = 2<sup>2</sup>
    - 1 << 3 = 8 = 2<sup>3</sup>
    - 1 << 4 = 16 = 2<sup>4</sup>
    - 1 << n = 2<sup>n</sup>

### Right Shift ( >> ) : 
- Right shift operator is a binary operator which shift the some number of bits, in the given bit pattern, to the right and append 1 at the end. Right shift is equivalent to dividing the bit pattern with 2k ( if we are shifting k bits ).
    - 4 >> 1 = 2
    - 6 >> 1 = 3
    - 5 >> 1 = 2
    - 16 >> 4 = 1

- Bitwise operators are good for saving space and sometimes to cleverly remove dependencies.

### How negeive number is stored at memory level ?
- Negative numbers are typically stored using a system called two's complement representation at the memory level. 
- In this representation, the most significant bit (MSB) of the binary number is used to indicate the sign of the number. If the MSB is 0, the number is positive, and if it's 1, the number is negative.

- To store a negative number in memory using two's complement, follow these steps:

- Convert the absolute value of the number to binary representation.
    - If the number is already in binary form, skip this step. Otherwise, convert it to binary using the appropriate number of bits.
    - If the number is positive, simply store the binary representation in memory.
    - If the number is negative, perform the following steps:
    - Invert all the bits (change 0s to 1s and vice versa) of the binary representation.
    - Add 1 to the inverted value.
    - Store the resulting binary representation in memory.

- For example, let's say we want to store the decimal number -5 in memory using 8 bits:

    - The absolute value of -5 is 5, which is 00000101 in binary.
    - Since we're using 8 bits, we don't need to add any leading zeros.
    - The number is negative, so we invert the bits: 11111010.
    - Add 1 to the inverted value: 11111011.
    - Store the resulting binary representation, 11111011, in memory.
- When the number is retrieved from memory, the computer interprets the two's complement representation and performs the necessary calculations to interpret the sign correctly.


### Bit Manipulation 
- https://leetcode.com/problems/decode-xored-array/
- https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/
- https://www.geeksforgeeks.org/length-longest-consecutive-1s-binary-representation/
- https://leetcode.com/problems/max-consecutive-ones/
- https://leetcode.com/problems/hamming-distance/
- https://leetcode.com/problems/single-number/
- https://leetcode.com/problems/single-number-iii/
- https://leetcode.com/problems/single-number-ii/
- print all subsequences of a string using bitmasking
- https://leetcode.com/problems/score-after-flipping-matrix/
- https://leetcode.com/problems/bitwise-and-of-numbers-range/
- https://leetcode.com/problems/total-hamming-distance/
- https://leetcode.com/problems/decode-xored-permutation/
### Level 2
- https://leetcode.com/problems/find-the-shortest-superstring/
- https://leetcode.com/problems/find-the-shortest-superstring/
- https://leetcode.com/problems/triples-with-bitwise-and-equal-to-zero/

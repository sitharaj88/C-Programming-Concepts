/**
 *
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/
 *
 * @file: BitManipulation.c
 *
 * @autor: Sitharaj Seenivasan
 *
 * @date: 2025-02-16
 *
 * @brief:  This C program demonstrates bitwise operators in C.
 *          Bitwise operators are used to perform bit-level operations on integers.
 *          The bitwise operators supported by C are:
 *          - Bitwise AND (&) :Sets each bit to 1 if both bits are 1
 *          - Bitwise OR (|)  :Sets each bit to 1 if one of the bits is 1
 *          - Bitwise XOR (^) :Sets each bit to 1 if only one of the bits is 1
 *          - Bitwise NOT (~) :Inverts all the bits
 *          - Left shift (<<) :Shifts the bits to the left
 *          - Right shift (>>):Shifts the bits to the right
 */

#include <stdio.h>

int main() {
    unsigned int a = 12; // Binary: 1100
    unsigned int b = 10; // Binary: 1010

    // Bitwise AND
    printf("a & b = %d\n", a & b); // 1100 & 1010 = 1000 (8)

    // Bitwise OR
    printf("a | b = %d\n", a | b); // 1100 | 1010 = 1110 (14)

    // Bitwise XOR
    printf("a ^ b = %d\n", a ^ b); // 1100 ^ 1010 = 0110 (6)

    // Left shift
    printf("a << 1 = %d\n", a << 1); // 1100 << 1 = 11000 (24)

    // Right shift
    printf("a >> 1 = %d\n", a >> 1); // 1100 >> 1 = 0110 (6)

    return 0;
}

/**
 * Output:
 * a & b = 8
 * a | b = 14
 * a ^ b = 6
 * a << 1 = 24
 * a >> 1 = 6
 */
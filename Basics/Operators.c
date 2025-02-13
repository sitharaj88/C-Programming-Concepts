/*

 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/
 *
 * @file: Operators.c
 *
 * @autor: Sitharaj Seenivasan
 *
 * @date: 2025-02-13
 *
 * @brief: This program demonstrates operators in C
 *
 * Operators in C are used to perform operations on variables and values.
 *
 * Arithmetic Operators: +, -, *, /, %
 * Relational Operators: >, <, ==, !=, >=, <=
 * Logical Operators: &&, ||, !
 * Assignment Operators: =, +=, -=, *=, /=, %=
 * Increment/Decrement Operators: ++, --
 * Bitwise Operators: &, |, ^, ~, <<, >>
 *
 *
*/

#include <stdio.h>

int main()
{
    // Arithmetic Operators
    int a = 10, b = 4;
    printf("Arithmetic Operators:\n");
    printf("%d + %d = %d\n", a, b, a + b);    // Addition
    printf("%d - %d = %d\n", a, b, a - b);    // Subtraction
    printf("%d * %d = %d\n", a, b, a * b);    // Multiplication
    printf("%d / %d = %d\n", a, b, a / b);    // Division
    printf("%d %% %d = %d\n\n", a, b, a % b); // Modulus

    // Relational Operators
    printf("Relational Operators:\n");
    printf("%d > %d = %d\n", a, b, a > b);     // Greater than
    printf("%d < %d = %d\n", a, b, a < b);     // Less than
    printf("%d == %d = %d\n", a, b, a == b);   // Equal to
    printf("%d != %d = %d\n", a, b, a != b);   // Not equal to
    printf("%d >= %d = %d\n", a, b, a >= b);   // Greater than or equal to
    printf("%d <= %d = %d\n\n", a, b, a <= b); // Less than or equal to

    // Logical Operators
    int x = 1, y = 0;
    printf("Logical Operators:\n");
    printf("%d && %d = %d\n", x, y, x && y); // Logical AND
    printf("%d || %d = %d\n", x, y, x || y); // Logical OR
    printf("!%d = %d\n\n", x, !x);           // Logical NOT

    // Assignment Operators
    int c = 5;
    printf("Assignment Operators:\n");
    c += 2; // Equivalent to c = c + 2
    printf("c += 2 => c = %d\n", c);
    c -= 3; // Equivalent to c = c - 3
    printf("c -= 3 => c = %d\n", c);
    c *= 4; // Equivalent to c = c * 4
    printf("c *= 4 => c = %d\n", c);
    c /= 2; // Equivalent to c = c / 2
    printf("c /= 2 => c = %d\n", c);
    c %= 3; // Equivalent to c = c % 3
    printf("c %%= 3 => c = %d\n\n", c);

    // Increment/Decrement Operators
    int d = 7;
    printf("Increment/Decrement Operators:\n");
    printf("d = %d\n", d);
    printf("d++ = %d\n", d++); // Post-increment
    printf("After d++, d = %d\n", d);
    printf("++d = %d\n", ++d); // Pre-increment
    printf("After ++d, d = %d\n", d);
    printf("d-- = %d\n", d--); // Post-decrement
    printf("After d--, d = %d\n", d);
    printf("--d = %d\n", --d); // Pre-decrement
    printf("After --d, d = %d\n\n", d);

    // Bitwise Operators
    int e = 12, f = 10; // Binary: 12 = 1100, 10 = 1010
    printf("Bitwise Operators:\n");
    printf("%d & %d = %d\n", e, f, e & f); // Bitwise AND
    printf("%d | %d = %d\n", e, f, e | f); // Bitwise OR
    printf("%d ^ %d = %d\n", e, f, e ^ f); // Bitwise XOR
    printf("~%d = %d\n", e, ~e);           // Bitwise NOT
    printf("%d << 1 = %d\n", e, e << 1);   // Left shift
    printf("%d >> 1 = %d\n\n", e, e >> 1); // Right shift

    return 0;
}

/*
 * Output:
 * Arithmetic Operators:
 * 10 + 4 = 14
 * 10 - 4 = 6
 * 10 * 4 = 40
 * 10 / 4 = 2
 * 10 % 4 = 2
 *
 * Relational Operators:
 * 10 > 4 = 1
 * 10 < 4 = 0
 * 10 == 4 = 0
 * 10 != 4 = 1
 * 10 >= 4 = 1
 * 10 <= 4 = 0
 *
 * Logical Operators:
 * 1 && 0 = 0
 * 1 || 0 = 1
 * !1 = 0
 *
 * Assignment Operators:
 * c += 2 => c = 7
 * c -= 3 => c = 4
 * c *= 4 => c = 16
 * c /= 2 => c = 8
 * c %= 3 => c = 2
 *
 * Increment/Decrement Operators:
 * d = 7
 * d++ = 7
 * After d++, d = 8
 * ++d = 9
 * After ++d, d = 9
 * d-- = 9
 * After d--, d = 8
 * --d = 7
 * After --d, d = 7
 *
 * Bitwise Operators:
 * 12 & 10 = 8
 * 12 | 10 = 14
 * 12 ^ 10 = 6
 * ~12 = -13
 * 12 << 1 = 24
 * 12 >> 1 = 6
 *
 */
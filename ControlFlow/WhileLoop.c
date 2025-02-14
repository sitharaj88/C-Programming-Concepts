/**
 * 
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/ 
 * 
 * @file: WhileLoop.c
 * 
 * @autor: Sitharaj Seenivasan
 * 
 * @date: 2025-02-14
 * 
 * @brief: This program demonstrates the use of while loop in C
 * In this program, the user is asked to enter an integer. The program then adds the digits of the number entered by the user.
 */

#include <stdio.h>

int main() {
    int number, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        remainder = number % 10; // Extract the last digit
        sum += remainder;        // Add the digit to the sum
        number /= 10;            // Remove the last digit
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}

/**
 * Output:
 * 
 * Enter a number: 12345
 * Sum of digits = 15
 * 
 */
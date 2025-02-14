
/**
 * 
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/ 
 * 
 * @file: Recursion.c
 * 
 * @autor: Sitharaj Seenivasan
 * 
 * @date: 2025-02-13
 * 
 * @brief:  This program demonstrates recursion in C.
 *          A function is said to be recursive if it calls itself.
 * 
 */

#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int result = factorial(number);
        printf("Factorial of %d is %d\n", number, result);
    }

    return 0;
}

/**
 * Output:
 * Enter a number: 5
 * Factorial of 5 is 120
 * 
 */
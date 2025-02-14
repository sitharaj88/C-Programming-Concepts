
/**
 * 
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/ 
 * 
 * @file: FunctionArguments.c
 * 
 * @autor: Sitharaj Seenivasan
 * 
 * @date: 2025-02-13
 * 
 * @brief:  This program demonstrates the pass-by-value and pass-by-reference in C functions.
 *          In pass-by-value, the actual value of the variable is passed to the function.  
 *          In pass-by-reference, the address of the variable is passed to the function.
 * 
 */

#include <stdio.h>

// Function to swap two numbers (pass-by-value)
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue: a = %d, b = %d\n", a, b);
}

// Function to swap two numbers (pass-by-reference)
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swapByReference: a = %d, b = %d\n", *a, *b);
}

int main() {
    int num1 = 5, num2 = 10;

    printf("Before swapByValue: num1 = %d, num2 = %d\n", num1, num2);
    swapByValue(num1, num2); // Pass-by-value
    printf("After swapByValue: num1 = %d, num2 = %d\n", num1, num2);

    printf("\nBefore swapByReference: num1 = %d, num2 = %d\n", num1, num2);
    swapByReference(&num1, &num2); // Pass-by-reference
    printf("After swapByReference: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

/**
 * Output:
 * Before swapByValue: num1 = 5, num2 = 10
 * Inside swapByValue: a = 10, b = 5
 * After swapByValue: num1 = 5, num2 = 10
 * 
 */
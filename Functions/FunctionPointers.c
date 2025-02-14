
/**
 * 
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/ 
 * 
 * @file: FunctionPointers.c
 * 
 * @autor: Sitharaj Seenivasan
 * 
 * @date: 2025-02-13
 * 
 * @brief:  This program demonstrates function pointers in C.
 *          A function pointer is a variable that stores the address of a function. 
 *          It can be used to call a function indirectly.    
 *          Syntax: return_type (*function_pointer_name)(parameter_list);
 * 
 */

#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two numbers
int subtract(int a, int b) {
    return a - b;
}

// Function to multiply two numbers
int multiply(int a, int b) {
    return a * b;
}

int main() {
    // Declare a function pointer
    int (*operation)(int, int);

    int num1 = 10, num2 = 5;

    // Use the function pointer to call add
    operation = add;
    printf("Addition: %d\n", operation(num1, num2));

    // Use the function pointer to call subtract
    operation = subtract;
    printf("Subtraction: %d\n", operation(num1, num2));

    // Use the function pointer to call multiply
    operation = multiply;
    printf("Multiplication: %d\n", operation(num1, num2));

    return 0;
}

/**
 * Output:
 * Addition: 15
 * Subtraction: 5
 * Multiplication: 50
 * 
 */
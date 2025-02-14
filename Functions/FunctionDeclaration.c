
/**
 * 
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/ 
 * 
 * @file: FunctionDelaration.c
 * 
 * @autor: Sitharaj Seenivasan
 * 
 * @date: 2025-02-13
 * 
 * @brief: This program demonstrates the declaration and definition of functions in C
 *         Function declaration is also known as function prototype.
 *         It tells the compiler about the number of parameters the function takes, the data types of the parameters, and the return type of the function.
 * 
 */

#include <stdio.h>

// Function declaration (prototype)
int add(int a, int b);

int main() {
    int num1 = 10, num2 = 20;

    // Function call
    int result = add(num1, num2);
    printf("The sum of %d and %d is %d\n", num1, num2, result);

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}

/*
    Output:
    The sum of 10 and 20 is 30
*/

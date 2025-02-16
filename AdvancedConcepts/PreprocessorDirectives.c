/**
 *
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/
 *
 * @file: PreprocessorDirectives.c
 *
 * @autor: Sitharaj Seenivasan
 *
 * @date: 2025-02-16
 *
 * @brief:  This C program demonstrates how to use preprocessor directives in C.
 *          Preprocessor directives are lines in your program that start with a hash sign (#).
 *          These lines are processed by the preprocessor before the compilation of the program.
 *          Preprocessor directives are used for conditional compilation, file inclusion, and macro definition.
 *          This program defines a macro for the value of PI and calculates the area of a circle using the macro.
 *          It also demonstrates conditional compilation using the DEBUG macro.
 *          If the DEBUG macro is defined, the program prints a debug message; otherwise, it prints a message that debug mode is off.
 * 
 */

#include <stdio.h>

// Define a macro
#define PI 3.14159

// Conditional compilation
#define DEBUG 1

int main() {
    double radius = 5.0;
    double area = PI * radius * radius;

    printf("Area of the circle: %.2f\n", area);

    // Conditional compilation example
    #if DEBUG
        printf("Debug mode is ON.\n");
    #else
        printf("Debug mode is OFF.\n");
    #endif

    return 0;
}

/**
 * Output:
 * Area of the circle: 78.54
 * Debug mode is ON.
 */

 
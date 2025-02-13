
/**
 * 
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/ 
 * 
 * @file: Comments.c
 * 
 * @autor: Sitharaj Seenivasan
 * 
 * @date: 2025-02-13
 * 
 * @brief: This program demonstrates the use of comments in C
 * 
 */


#include <stdio.h>

int main() {
    // This is a single-line comment
    printf("Hello, World!\n"); // This comment explains the purpose of the printf statement

    /*
        This is a multi-line comment.
        It can span multiple lines and is useful for longer explanations.
    */
    printf("Welcome to the C Programming World!\n");

    /*
        Multi-line comments can also be used to "comment out" code temporarily.
        For example, the following line is commented out and will not execute:
        printf("This line is commented out and won't run.\n");
    */

    // Single-line comments can also be used to comment out code:
    // printf("This line is also commented out and won't run.\n");

    // Example of using comments to explain code logic
    int a = 10, b = 20;
    int sum = a + b; // Calculate the sum of a and b
    printf("The sum of %d and %d is %d\n", a, b, sum);

    return 0; // Indicates that the program executed successfully
}
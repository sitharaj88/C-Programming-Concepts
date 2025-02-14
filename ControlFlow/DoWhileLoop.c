/**
 * 
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/ 
 * 
 * @file: DoWhileLoop.c
 * 
 * @autor: Sitharaj Seenivasan
 * 
 * @date: 2025-02-14
 * 
 * @brief: This program demonstrates the use of do-while loop in C
 * In this program, the user is asked to enter a positive number. The program will keep asking the user to enter the number until the user enters a positive number.
 */

#include <stdio.h>

int main() {
    int number;

    do {
        printf("Enter a positive number: ");
        scanf("%d", &number);

        if (number <= 0) {
            printf("Invalid input. Please try again.\n");
        }
    } while (number <= 0);

    printf("You entered: %d\n", number);

    return 0;
}
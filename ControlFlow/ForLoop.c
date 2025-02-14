
/**
 * 
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/ 
 * 
 * @file: ForLoop.c
 * 
 * @autor: Sitharaj Seenivasan
 * 
 * @date: 2025-02-14
 * 
 * @brief: This program demonstrates the use of for loop in C
 * In this program, we have used a for loop to print the multiplication table of a number entered by the user.
 * 
 */


#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Multiplication table of %d:\n", number);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}

/**
 * Output:
 * 
 * Enter a number: 5
 * Multiplication table of 5:
 * 5 x 1 = 5
 * 5 x 2 = 10
 * 5 x 3 = 15
 * 5 x 4 = 20
 * 5 x 5 = 25
 * 5 x 6 = 30
 * 5 x 7 = 35
 * 5 x 8 = 40
 * 5 x 9 = 45
 * 5 x 10 = 50
 * 
 */

/**
 * 
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/ 
 * 
 * @file: IfElse.c
 * 
 * @autor: Sitharaj Seenivasan
 * 
 * @date: 2025-02-14
 * 
 * @brief: This program demonstrates the use of if-else statements in C
 * In this program, we have used an if-else statement to check whether a number is positive, negative, or zero.
 * 
 */

 #include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("%d is a positive number.\n", number);
    } else if (number < 0) {
        printf("%d is a negative number.\n", number);
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}

/**
 * Output:
 * 
 * Enter a number: 10
 * 10 is a positive number.
 * 
 * Enter a number: -5
 * -5 is a negative number.
 * 
 * Enter a number: 0
 * The number is zero.
 *
*/
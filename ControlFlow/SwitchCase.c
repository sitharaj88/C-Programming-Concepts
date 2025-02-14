
/**
 * 
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/ 
 * 
 * @file: SwitchCase.c
 * 
 * @autor: Sitharaj Seenivasan
 * 
 * @date: 2025-02-14
 * 
 * @brief: This program demonstrates the use of switch-case statements in C
 * In this program, we have used a switch-case statement to perform arithmetic operations based on the operator entered by the user.
 * 
 */

#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}

/**
 * Output:
 * 
 * Enter an operator (+, -, *, /): *
 * Enter two numbers: 12.5 3.4
 * 12.50 * 3.40 = 42.50
 * 
 * Enter an operator (+, -, *, /): /
 * Enter two numbers: 10 0
 * Error: Division by zero is not allowed.
 * 
 * Enter an operator (+, -, *, /): %
 * Enter two numbers: 10 5
 * Error: Invalid operator.
 * 
 */
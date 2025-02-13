/**
 *
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/
 *
 * @file: InputOutput.c
 *
 * @autor: Sitharaj Seenivasan
 *
 * @date: 2025-02-13
 *
 * @brief: This program demonstrates input and output in C
 *
 */

#include <stdio.h>

int main() {
    // Declare variables
    int age;
    float height;
    double weight;
    char grade;
    char name[50];

    // Input: Get user details
    printf("Enter your name: ");
    scanf("%[^\n]%*c", name); // Read a full line of text (including spaces)

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    printf("Enter your weight (in kilograms): ");
    scanf("%lf", &weight);

    printf("Enter your grade (A, B, C, etc.): ");
    scanf(" %c", &grade); // Note the space before %c to consume any leftover newline character

    // Output: Display user details
    printf("\n--- User Details ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d years\n", age);
    printf("Height: %.2f meters\n", height);
    printf("Weight: %.2lf kilograms\n", weight);
    printf("Grade: %c\n", grade);

    return 0;
}

/**
 * Output:
 * Enter your name: John Doe
 * Enter your age: 30
 * Enter your height (in meters): 1.75
 * Enter your weight (in kilograms): 75.5
 * Enter your grade (A, B, C, etc.): A
 *
 * --- User Details ---
 * Name: John Doe
 * Age: 30 years
 * Height: 1.75 meters
 * Weight: 75.50 kilograms
 * Grade: A
 */
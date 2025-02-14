
/**
 *
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/
 *
 * @file: StringManipulation.c
 *
 * @autor: Sitharaj Seenivasan
 *
 * @date: 2025-02-15
 *
 * @brief: This C program demonstrates string manipulation functions like strcpy, strcat, strlen.
 *
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char result[100];

    // Copy str1 into result
    strcpy(result, str1);
    printf("After copying str1: %s\n", result);

    // Concatenate str2 to result
    strcat(result, " ");
    strcat(result, str2);
    printf("After concatenation: %s\n", result);

    // Calculate the length of the concatenated string
    int length = strlen(result);
    printf("Length of the string: %d\n", length);

    return 0;
}

/**
 * Output:
 * After copying str1: Hello
 * After concatenation: Hello World
 * Length of the string: 11
 */
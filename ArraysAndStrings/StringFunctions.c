
/**
 *
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/
 *
 * @file: StringFunctions.c
 *
 * @autor: Sitharaj Seenivasan
 *
 * @date: 2025-02-15
 *
 * @brief: This C program demonstrates the basic string functions such as strcmp, strchr, and strstr.
 *
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Programming";
    char str2[50] = "Program";
    char ch = 'm';
    char *ptr;

    // Compare two strings
    if (strcmp(str1, str2) == 0) {
        printf("'%s' and '%s' are equal.\n", str1, str2);
    } else {
        printf("'%s' and '%s' are not equal.\n", str1, str2);
    }

    // Find the first occurrence of a character in a string
    ptr = strchr(str1, ch);
    if (ptr != NULL) {
        printf("'%c' found at position: %ld\n", ch, ptr - str1 + 1);
    } else {
        printf("'%c' not found in '%s'\n", ch, str1);
    }

    // Find the first occurrence of a substring in a string
    ptr = strstr(str1, str2);
    if (ptr != NULL) {
        printf("'%s' found in '%s' at position: %ld\n", str2, str1, ptr - str1 + 1);
    } else {
        printf("'%s' not found in '%s'\n", str2, str1);
    }

    return 0;
}

/**
 * Output:
 * 'Programming' and 'Program' are not equal.
 * 'm' found at position: 11
 * 'Program' found in 'Programming' at position: 1
 */
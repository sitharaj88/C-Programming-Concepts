/**
 *
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/
 *
 * @file: FileRead.c
 *
 * @autor: Sitharaj Seenivasan
 *
 * @date: 2025-02-16
 *
 * @brief:  This C program demonstrates how to read the contents of a file character by character.
 *          The user is asked to enter the filename to read.
 *          The program then opens the file in read mode using fopen() function.
 *          If the file does not exist or cannot be opened, an error message is displayed.
 *          The program reads the file contents character by character using fgetc() function and prints them to the console.
 * 
 */

#include <stdio.h>

int main() {
    FILE *file;
    char filename[50];
    char ch;

    printf("Enter the filename to read: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Read and print the file contents character by character
    printf("File contents:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);

    return 0;
}

/**
 * Output:
 * Enter the filename to read: sample.txt
 * File contents:
 * Hello World
 * This is a sample file.
 * 
 */
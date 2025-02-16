/**
 *
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/
 *
 * @file: FileErrorHandling.c
 *
 * @autor: Sitharaj Seenivasan
 *
 * @date: 2025-02-16
 *
 * @brief:  This C program demonstrates how to handle file errors in C.
 *          The user is asked to enter the filename to open.
 *          The program then opens the file in read mode using fopen() function.
 *          If the file does not exist or cannot be opened, an error message is displayed using perror() function.
 *          If the file opens successfully, a success message is displayed.
 *          Finally, the program closes the file.
 */

#include <stdio.h>

int main() {
    FILE *file;
    char filename[50];

    printf("Enter the filename to open: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");

    if (file == NULL) {
        perror("Error"); // Print the error message
        return 1;
    }

    // If the file opens successfully, print a success message
    printf("File %s opened successfully.\n", filename);

    // Close the file
    fclose(file);

    return 0;
}

/**
 * Output:
 * Enter the filename to open: test.txt
 * Error: No such file or directory
 */
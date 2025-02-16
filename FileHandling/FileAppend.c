/**
 *
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/
 *
 * @file: FileAppend.c
 *
 * @autor: Sitharaj Seenivasan
 *
 * @date: 2025-02-16
 *
 * @brief:  This C program demonstrates how to append data to a file.
 *          The user is asked to enter the filename to append.
 *          The program then opens the file in append mode using fopen() function.
 *          If the file does not exist or cannot be opened, an error message is displayed.
 *          The program asks the user to enter data to append to the file.
 *          The program appends the data to the file using fprintf() function.
 *          Finally, the program closes the file.
 * 
 */

#include <stdio.h>

int main() {
    FILE *file;
    char filename[50];
    char data[100];

    printf("Enter the filename to append: ");
    scanf("%s", filename);

    // Open the file in append mode
    file = fopen(filename, "a");

    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Get input from the user
    printf("Enter data to append to the file (max 100 characters):\n");
    getchar(); // Consume the newline character left by scanf
    fgets(data, 100, stdin);

    // Append data to the file
    fprintf(file, "%s", data);

    // Close the file
    fclose(file);

    printf("Data appended to %s successfully.\n", filename);

    return 0;
}

/**
 * Output:
 * Enter the filename to append: sample.txt
 * Enter data to append to the file (max 100 characters):
 * This is a new line appended to the file.
 * Data appended to sample.txt successfully.
 * 
 */
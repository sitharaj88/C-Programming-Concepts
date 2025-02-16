/**
 *
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/
 *
 * @file: FileWrite.c
 *
 * @autor: Sitharaj Seenivasan
 *
 * @date: 2025-02-16
 *
 * @brief:  This C program demonstrates how to write data to a file.
 *          The user is asked to enter the filename to write.
 *          The program then opens the file in write mode using fopen() function.
 *          If the file does not exist or cannot be opened, an error message is displayed.
 *          The program reads data from the user and writes it to the file using fprintf() function.
 *          Finally, the file is closed using fclose() function.
 *          The program displays a success message if the data is written successfully.
 */

 #include <stdio.h>

int main() {
    FILE *file;
    char filename[50];
    char data[100];

    printf("Enter the filename to write: ");
    scanf("%s", filename);

    // Open the file in write mode
    file = fopen(filename, "w");

    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Get input from the user
    printf("Enter data to write to the file (max 100 characters):\n");
    getchar(); // Consume the newline character left by scanf
    fgets(data, 100, stdin);

    // Write data to the file
    fprintf(file, "%s", data);

    // Close the file
    fclose(file);

    printf("Data written to %s successfully.\n", filename);

    return 0;
}

/**
 * Output:
 * Enter the filename to write: sample.txt
 * Enter data to write to the file (max 100 characters):
 * Hello World
 * Data written to test.txt successfully.
 */
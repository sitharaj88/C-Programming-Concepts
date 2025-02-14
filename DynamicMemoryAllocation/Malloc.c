/**
 *
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/
 *
 * @file: Malloc.c
 *
 * @autor: Sitharaj Seenivasan
 *
 * @date: 2025-02-15
 *
 * @brief:  This C program demonstrates the use of malloc() function to dynamically allocate memory for an array.
 *          The user is asked to enter the number of elements in the array.
 *          The program then allocates memory for the array using malloc() function.
 *          The user is asked to input the elements of the array.
 *          Finally, the program prints the array elements and frees the allocated memory using free() function.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory using malloc
    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the array elements
    printf("Array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}

/**
 * Output:
 * Enter the number of elements: 5
 * Enter 5 elements:
 * 10
 * 20
 * 30
 * 40
 * 50
 * Array elements:
 * 10 20 30 40 50
 */
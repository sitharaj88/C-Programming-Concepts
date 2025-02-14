/**
 *
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/
 *
 * @file: Realloc.c
 *
 * @autor: Sitharaj Seenivasan
 *
 * @date: 2025-02-15
 *
 * @brief:  This C program demonstrates the use of realloc() function to resize a dynamically allocated memory block.
 *          The user is asked to enter the initial number of elements in the array.
 *          The program then allocates memory for the array using malloc() function.
 *          The user is asked to enter the elements of the array.
 *          The program prints the array elements and asks the user to enter the new size of the array.
 *          The program then resizes the array using realloc() function and prints the resized array elements.
 *          The program frees the allocated memory using free() function.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter the initial number of elements: ");
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
    printf("Initial array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Resize the array using realloc
    int newSize;
    printf("Enter the new size of the array: ");
    scanf("%d", &newSize);

    arr = (int *)realloc(arr, newSize * sizeof(int));

    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Input additional elements if the new size is larger
    if (newSize > n) {
        printf("Enter %d additional elements:\n", newSize - n);
        for (int i = n; i < newSize; i++) {
            scanf("%d", &arr[i]);
        }
    }

    // Print the resized array elements
    printf("Resized array elements:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}

/**
 * Output:
 * Enter the initial number of elements: 3
 * Enter 3 elements:
 * 10
 * 20
 * 30
 * Initial array elements:
 * 10 20 30
 * Enter the new size of the array: 5
 * Enter 2 additional elements:
 * 40
 * 50
 * Resized array elements:
 * 10 20 30 40 50
 */
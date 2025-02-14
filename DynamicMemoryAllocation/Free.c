/**
 *
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/
 *
 * @file: Free.c
 *
 * @autor: Sitharaj Seenivasan
 *
 * @date: 2025-02-15
 *
 * @brief:  This C program demonstrates the use of free() function to deallocate memory allocated using malloc() function.
 *          The user is asked to enter the number of elements in the array.
 *          The program then allocates memory for the array using malloc() function.
 *          The user is asked to enter the elements of the array.
 *          The program prints the array elements and frees the allocated memory using free() function.
 *          The program then attempts to access the array after freeing (undefined behavior).
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

    // Attempt to access the array after freeing (undefined behavior)
    printf("Attempting to access array after freeing...\n");
    printf("arr[0] = %d\n", arr[0]); // This may crash or produce unexpected results

    return 0;
}
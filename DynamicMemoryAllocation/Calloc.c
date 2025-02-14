/**
 *
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/
 *
 * @file: Calloc.c
 *
 * @autor: Sitharaj Seenivasan
 *
 * @date: 2025-02-15
 *
 * @brief:  This C program demonstrates the use of calloc() function to dynamically allocate memory for an array.
 *          The main difference between malloc() and calloc() is that malloc() does not initialize the memory allocated,
 *          while calloc() initializes the allocated memory to zero.
 *          The user is asked to enter the number of elements in the array.
 *          The program then allocates memory for the array using calloc() function.
 *          The program prints the array elements (initialized to zero) and frees the allocated memory using free() function.
 * 
 */


#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory using calloc
    int *arr = (int *)calloc(n, sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Print the array elements (initialized to zero)
    printf("Array elements (initialized to zero):\n");
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
 * Array elements (initialized to zero):
 * 0 0 0 0 0
 * 
 * 
 */
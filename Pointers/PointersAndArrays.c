/**
 *
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/
 *
 * @file: PointerAndArrays.c
 *
 * @autor: Sitharaj Seenivasan
 *
 * @date: 2025-02-15
 *
 * @brief: This C program demonstrates how to access array elements using pointers and array notation.
 *
 *
 *
 */


#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer to the first element of the array

    printf("Array elements using pointer:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, *(ptr + i)); // Accessing array elements using pointer arithmetic
    }

    printf("\nArray elements using array notation:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, ptr[i]); // Accessing array elements using array notation
    }

    return 0;
}

/**
 * Output:
 * Array elements using pointer:
 * arr[0] = 10
 * arr[1] = 20
 * arr[2] = 30
 * arr[3] = 40
 * arr[4] = 50
 *
 * Array elements using array notation:
 * arr[0] = 10
 * arr[1] = 20
 * arr[2] = 30
 * arr[3] = 40
 * arr[4] = 50
 */
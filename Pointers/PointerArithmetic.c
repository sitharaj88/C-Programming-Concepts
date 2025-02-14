/**
 *
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/
 *
 * @file: PointerArithmetic.c
 *
 * @autor: Sitharaj Seenivasan
 *
 * @date: 2025-02-15
 *
 * @brief: This C program demonstrates the arithmetic operations on pointers such as increment, decrement, addition, and subtraction.
 *
 *
 *
 */


#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer to the first element of the array

    printf("Initial address: %p, Value: %d\n", (void*)ptr, *ptr);

    ptr++; // Move to the next element
    printf("After increment: %p, Value: %d\n", (void*)ptr, *ptr);

    ptr--; // Move back to the previous element
    printf("After decrement: %p, Value: %d\n", (void*)ptr, *ptr);

    int *ptr2 = ptr + 3; // Move 3 elements ahead
    printf("Address after adding 3: %p, Value: %d\n", (void*)ptr2, *ptr2);

    printf("Difference between ptr2 and ptr: %ld\n", ptr2 - ptr);

    return 0;
}

/**
 * Output:
 * Initial address: 0x16f29af60, Value: 10
 * After increment: 0x16f29af60, Value: 20
 * After decrement: 0x16f29af60, Value: 10
 * Address after adding 3: 0x16f29af60, Value: 40
 * Difference between ptr2 and ptr: 3
 */
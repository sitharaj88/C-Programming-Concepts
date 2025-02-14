/**
 *
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/
 *
 * @file: DoublePointers.c
 *
 * @autor: Sitharaj Seenivasan
 *
 * @date: 2025-02-15
 *
 * @brief: This C program demonstrates how to use double pointers in C.
 *         A double pointer is a pointer that points to another pointer.
 *         It is also known as a pointer to a pointer.
 *
 */



#include <stdio.h>

int main() {
    int num = 42;
    int *ptr = &num; // Pointer to an integer
    int **dptr = &ptr; // Double pointer (pointer to a pointer)

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void*)&num);
    printf("Value of ptr (address stored in ptr): %p\n", (void*)ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);
    printf("Value of dptr (address stored in dptr): %p\n", (void*)dptr);
    printf("Value pointed to by dptr: %p\n", (void*)*dptr);
    printf("Value pointed to by *dptr: %d\n", **dptr);

    return 0;
}


/**
 * Output:
 * Value of num: 42
 * Address of num: 0x7fffbf7b1bfc
 * Value of ptr (address stored in ptr): 0x7fffbf7b1bfc
 * Value pointed to by ptr: 42
 * Value of dptr (address stored in dptr): 0x7fffbf7b1bf0
 * Value pointed to by dptr: 0x7fffbf7b1bfc
 * Value pointed to by *dptr: 42
 */
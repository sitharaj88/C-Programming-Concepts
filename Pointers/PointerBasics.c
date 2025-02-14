/**
 *
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/
 *
 * @file: PointerBasics.c
 *
 * @autor: Sitharaj Seenivasan
 *
 * @date: 2025-02-15
 *
 * @brief: This C program demonstrates the basic operations on pointers such as declaration, initialization, storing the address of a variable, and dereferencing.
 *
 *
 *
 */

 #include <stdio.h>

int main() {
    int num = 42;
    int *ptr; // Pointer declaration

    ptr = &num; // Pointer initialization (stores the address of num)

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void*)&num);
    printf("Value of ptr (address stored in ptr): %p\n", (void*)ptr);
    printf("Value pointed to by ptr: %d\n", *ptr); // Dereferencing

    return 0;
}

/**
 * Output:
 * Value of num: 42
 * Address of num: 0x16fbb6f78
 * Value of ptr (address stored in ptr): 0x16fbb6f78
 * Value pointed to by ptr: 42
 */
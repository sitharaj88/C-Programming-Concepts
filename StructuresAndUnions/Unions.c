/**
 *
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/
 *
 * @file: unions.c
 *
 * @autor: Sitharaj Seenivasan
 *
 * @date: 2025-02-15
 *
 * @brief:  This C program demonstrates how to use unions in C.
 *          A union is a user-defined data type similar to a structure in C.
 *          The main difference between a union and a structure is that a union can only store one value at a time.
 *          This program defines a union Data with three members: i (int), f (float), and str (string).
 *          It then demonstrates how to store and access different types of data in a union.
 */

#include <stdio.h>
#include <string.h>


// Define a union
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;

    // Store an integer
    data.i = 42;
    printf("data.i: %d\n", data.i);

    // Store a float
    data.f = 3.14;
    printf("data.f: %.2f\n", data.f);

    // Store a string
    strcpy(data.str, "Hello");
    printf("data.str: %s\n", data.str);

    // Accessing union members (only one can hold a value at a time)
    printf("Final value in union: %s\n", data.str);
    
    return 0;
}

/**
 * Output:
 * data.i: 42
 * data.f: 3.14
 * data.str: Hello
 * Final value in union: Hello
 */
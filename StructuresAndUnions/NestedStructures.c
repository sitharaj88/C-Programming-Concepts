/**
 *
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/
 *
 * @file: NestedStructures.c
 *
 * @autor: Sitharaj Seenivasan
 *
 * @date: 2025-02-15
 *
 * @brief:  This C program demonstrates how to use nested structures in C.
 *          A nested structure is a structure that is a member of another structure.
 *          This program defines a structure Address with four members: street, city, state, and zip.
 *          It then defines a structure Student that includes an Address structure as a member.
 * 
 *
 */

#include <stdio.h>
#include <string.h>

// Define a structure for Address
struct Address {
    char street[50];
    char city[50];
    char state[20];
    int zip;
};

// Define a structure for Student that includes an Address
struct Student {
    char name[50];
    int age;
    struct Address address; // Nested structure
};

int main() {
    // Declare and initialize a structure variable
    struct Student student1;
    strcpy(student1.name, "Jane Smith");
    student1.age = 22;
    strcpy(student1.address.street, "123 Main St");
    strcpy(student1.address.city, "Springfield");
    strcpy(student1.address.state, "IL");
    student1.address.zip = 62704;

    // Access and print nested structure members
    printf("Student Information:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Address: %s, %s, %s, %d\n", student1.address.street, student1.address.city, student1.address.state, student1.address.zip);

    return 0;
}

/**
 * Output:
 * Student Information:
 * Name: Jane Smith
 * Age: 22
 * Address: 123 Main St, Springfield, IL, 62704
 */
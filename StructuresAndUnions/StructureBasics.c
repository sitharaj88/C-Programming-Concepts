/**
 *
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/
 *
 * @file: StructureBasics.c
 *
 * @autor: Sitharaj Seenivasan
 *
 * @date: 2025-02-15
 *
 * @brief:  This C program demonstrates the basics of structures in C.
 *          A structure is a user-defined data type in C that allows you to
 *          group multiple variables of different data types under a single name.
 *          Each variable in a structure is called a member or field.
 *          You can access the members of a structure using the dot (.) operator.
 *          This program defines a structure Student with three members: name, age, and gpa.
 *
 */

#include <stdio.h>
#include <string.h>

// Define a structure
struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    // Declare and initialize a structure variable
    struct Student student1;
    strcpy(student1.name, "John Doe");
    student1.age = 20;
    student1.gpa = 3.8;

    // Access and print structure members
    printf("Student Information:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("GPA: %.2f\n", student1.gpa);

    return 0;
}

/**
 * Output:
 * Student Information:
 * Name: John Doe
 * Age: 20
 * GPA: 3.80
 */
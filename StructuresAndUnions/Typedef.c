/**
 *
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/
 *
 * @file: Typedef.c
 *
 * @autor: Sitharaj Seenivasan
 *
 * @date: 2025-02-15
 *
 * @brief:  This C program demonstrates the use of typedef with structures in C.
 *          The typedef keyword is used to create an alias for a data type.
 *          In this program, we define a structure Employee and create an alias Employee using typedef.
 *          We then declare a variable emp1 of type Employee and initialize its members.
 *          Finally, we print the employee information using the structure members.
 *
 */

#include <stdio.h>
#include <string.h>

// Define a structure and use typedef to create an alias
typedef struct {
    char name[50];
    int age;
    float salary;
} Employee;

int main() {
    // Declare a variable using the typedef alias
    Employee emp1;
    strcpy(emp1.name, "Alice Johnson");
    emp1.age = 30;
    emp1.salary = 75000.50;

    // Access and print structure members
    printf("Employee Information:\n");
    printf("Name: %s\n", emp1.name);
    printf("Age: %d\n", emp1.age);
    printf("Salary: %.2f\n", emp1.salary);

    return 0;
}

/**
 * Output:
 * Employee Information:
 * Name: Alice Johnson
 * Age: 30
 * Salary: 75000.50
 */
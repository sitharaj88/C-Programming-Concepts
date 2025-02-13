/**
 *
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/
 *
 * @file: VariablesAndDataTypes.c
 *
 * @autor: Sitharaj Seenivasan
 *
 * @date: 2025-02-13
 *
 * @brief: This is a simple program to demonstrate variables and data types in C
 *
 */

#include <stdio.h>
#include <stdbool.h> // For boolean data type

int main()
{
    // Integer data type
    int age = 25;
    printf("Integer (int): Age = %d\n", age);

    // Floating-point data types
    float weight = 65.5;
    printf("Float: Weight = %.2f kg\n", weight);

    double height = 175.75;
    printf("Double: Height = %.2f cm\n", height);

    // Character data type
    char grade = 'A';
    printf("Character (char): Grade = %c\n", grade);

    // Boolean data type
    bool isStudent = true;
    printf("Boolean (bool): Is Student = %d\n", isStudent); // Prints 1 for true, 0 for false

    // Unsigned integer (only positive values)
    unsigned int distance = 3000;
    printf("Unsigned Integer (unsigned int): Distance = %u meters\n", distance);

    // Short and long data types
    short smallNumber = 100;
    long largeNumber = 1234567890L;
    printf("Short: Small Number = %hd\n", smallNumber);
    printf("Long: Large Number = %ld\n", largeNumber);

    // Long long and unsigned long
    long long veryLargeNumber = 123456789012345LL;
    unsigned long population = 8000000000UL;
    printf("Long Long: Very Large Number = %lld\n", veryLargeNumber);
    printf("Unsigned Long: Population = %lu\n", population);

    return 0;
}

/**
 * Output:
 * Integer (int): Age = 25
 * Float: Weight = 65.50 kg
 * Double: Height = 175.75 cm
 * Character (char): Grade = A
 * Boolean (bool): Is Student = 1
 * Unsigned Integer (unsigned int): Distance = 3000 meters
 * Short: Small Number = 100
 * Long: Large Number = 1234567890
 * Long Long: Very Large Number = 123456789012345
 * Unsigned Long: Population = 8000000000
 */
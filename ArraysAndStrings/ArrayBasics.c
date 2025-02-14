
/**
 *
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/
 *
 * @file: ArrayBasics.c
 *
 * @autor: Sitharaj Seenivasan
 *
 * @date: 2025-02-15
 *
 * @brief: This C program demonstrates the basic operations on arrays such as declaration, initialization, accessing elements, modifying elements, and calculating the sum of elements.
 *
 *
 *
 */

#include <stdio.h>

int main()
{
    // Array declaration and initialization
    int numbers[5] = {10, 20, 30, 40, 50};

    // Accessing and printing array elements
    printf("Array elements:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    // Modifying an array element
    numbers[2] = 100;
    printf("\nAfter modification:\n");
    printf("numbers[2] = %d\n", numbers[2]);

    // Calculating the sum of array elements
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += numbers[i];
    }
    printf("\nSum of array elements: %d\n", sum);

    return 0;
}

/**
 * Output:
 * Array elements:
 * numbers[0] = 10
 * numbers[1] = 20
 * numbers[2] = 30
 * numbers[3] = 40
 * numbers[4] = 50
 *
 * After modification:
 * numbers[2] = 100
 *
 * Sum of array elements: 220
 *
 */
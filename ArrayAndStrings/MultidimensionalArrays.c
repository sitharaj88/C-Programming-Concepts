
/**
 *
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/
 *
 * @file: MultidimensinalArrays.c
 *
 * @autor: Sitharaj Seenivasan
 *
 * @date: 2025-02-15
 *
 * @brief: This C program demonstrates the basic operations on multidimensional arrays such as declaration, initialization, and addition of two matrices.
 *
 */

#include <stdio.h>

int main() {
    // Declare and initialize two 2D arrays (matrices)
    int matrix1[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int matrix2[2][3] = {
        {7, 8, 9},
        {10, 11, 12}
    };

    int result[2][3];

    // Add the two matrices
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the result matrix
    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/**
 * Output:
 * Resultant matrix after addition:
 * 8	10	12
 * 14	16	18
 */
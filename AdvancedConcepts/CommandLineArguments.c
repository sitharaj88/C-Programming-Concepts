/**
 *
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/
 *
 * @file: CommandLineArguments.c
 *
 * @autor: Sitharaj Seenivasan
 *
 * @date: 2025-02-16
 *
 * @brief:  This C program demonstrates how to pass command-line arguments to a C program.
 *          Command-line arguments are passed to a C program using the main() function.
 *          The main() function can take two arguments:
 *          - argc: The number of command-line arguments passed to the program.
 *          - argv: An array of strings containing the command-line arguments.
 *          The first argument (argv[0]) is the name of the program itself.
 *          The remaining arguments (argv[1], argv[2], ...) are the command-line arguments passed to the program.
 *          The argc argument specifies the number of command-line arguments passed to the program.
 * 
 */

 #include <stdio.h>

 int main(int argc, char *argv[]) {
     printf("Number of command-line arguments: %d\n", argc);
 
     // Print all command-line arguments
     for (int i = 0; i < argc; i++) {
         printf("Argument %d: %s\n", i, argv[i]);
     }
 
     return 0;
 }

/**
 * Output:
 * Number of command-line arguments: 3
 * Argument 0: ./a.out
 * Argument 1: hello
 * Argument 2: world
 */
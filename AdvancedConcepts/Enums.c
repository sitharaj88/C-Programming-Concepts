/**
 *
 * Apache License
 * Version 2.0, January 2004
 * http://www.apache.org/licenses/
 *
 * @file: Enums.c
 *
 * @autor: Sitharaj Seenivasan
 *
 * @date: 2025-02-16
 *
 * @brief:  Enumerations are user-defined data types that consist of integral constants.
 *          To define an enumeration, keyword enum is used. The enum keyword is also used to define the variables of enumerated data type.
 *          The enum keyword is used to declare an enumeration. It is a keyword that is used to define enumerated data types.
 *          The enum keyword is also used to define the variables of enumerated data type.
 * 
 */

#include <stdio.h>

// Define an enum for days of the week
enum Days {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    enum Days today = WEDNESDAY;

    switch (today) {
        case SUNDAY:
            printf("Today is Sunday.\n");
            break;
        case MONDAY:
            printf("Today is Monday.\n");
            break;
        case TUESDAY:
            printf("Today is Tuesday.\n");
            break;
        case WEDNESDAY:
            printf("Today is Wednesday.\n");
            break;
        case THURSDAY:
            printf("Today is Thursday.\n");
            break;
        case FRIDAY:
            printf("Today is Friday.\n");
            break;
        case SATURDAY:
            printf("Today is Saturday.\n");
            break;
        default:
            printf("Invalid day.\n");
    }

    return 0;
}

/**
 * Output:
 * Today is Wednesday.
 */
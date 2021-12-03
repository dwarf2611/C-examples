/* Demonstrate automatic promotion of numeric types.
Written by: Dwarf2611
Date: 11-30-2021
*/
#include <stdio.h>

int main (void)
{
    /* Local Definitions*/
    char aChar = 'A';
    int intNum = 200;
    double fltNum = 245.3;

    /*Statements*/
    printf("aChar contains: %c\n", aChar);
    printf("aChar numeric : %d\n", aChar);
    printf("intNum contains: %d\n", intNum);
    printf("fltNum contains: %f\n", fltNum);

    intNum = intNum + aChar; /*aChar promoted to int*/
    fltNum = fltNum + aChar; /*aChar promoted to float*/

    printf("\nAfter additions...\n");
    printf("aChar numeric : %d\n", aChar);
    printf("intNum contains: %d\n", intNum);
    printf("fltNum contains: %f\n", fltNum);

    return 0;
}/*main*/
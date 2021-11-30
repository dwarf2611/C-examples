/* Examine the effect of precedence on an expression.
Written by : Dwarf2611
Date: 11-30-2021
*/
#include <stdio.h>

int main (void)
{
    /*Local Definitions */
    int a=10;
    int b=20;
    int c=30;

    /*Statements*/
    printf("a*b+c is: %d\n", a*b+c);
    printf("a*(b+c) is %d\n", a*(b+c));
    return 0;
}/*main*/
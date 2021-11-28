/* This program demonstrates the two's complement values.
Written by: Dwarf2611
Date: 11-24-2021
*/
#include <stdio.h>

int main(void)
{
    /*local definitions*/ 
    int a = +13422;
    int b = -768;
    int ca;
    int cb;

    /*statements */
    ca = ~a;
    cb = ~b;
    printf ("The complement of %6d is %6d\n",a, ca);
    printf ("The complement of %6d is %6d\n", b, cb);
    return 0;
} /*main*/

/* Demonstrate circular nature of unsigned integer numbers.
Written by Dwarf2611
Date: 11-24-2021
*/

#include <stdio.h>
#include <limits.h>

int main (void)
{
    /*local definitions*/
    unsigned int x = UINT_MAX;
    /*Statements */
    printf ("Maximum value: %u\n",x);

    x++;
    printf ("Maximum value + 1: %u\n",x);

    x++;
    printf ("Maximum value + 2: %u\n",x);

    return 0;
} /*main*/

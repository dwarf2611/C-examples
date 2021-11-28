/*This program demonstrate three ways to use constants.
Written by Dwarf2611 
Date: 11-24-2021
*/
#include <stdio.h>
#define PI 3.1415926536

int main (void)
{
    /* Local definitions*/
      const double pi = 3.1415926536;

      /*Stattements*/
      printf("Defined constant PI: %f\n", PI);
      printf("Memory constant pi: %f\n", pi);
      printf("Literal constant: %f\n", 3.1415926536);
      return 0;
} /*main*/

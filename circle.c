/* This program calculates the area and circumference
of a circle using PI as defined constant.
Written by Dwarf2611    
Date: 11-25-2021
*/
#include <stdio.h>
#define PI 3.1416

int main (void)
{
    /*Local definitions*/
      float circ;
      float area;

      float radius;

      /*Statements*/

      printf("\nPlease enter the value of the radius:   ");
      scanf("%f", &radius);

      circ = 2  * PI     * radius;
      area = PI * radius * radius;

      printf("\nRadius is :            %10.2f", radius);
      printf("\nCircumference is :     %10.2f", circ);
      printf("\nArea is :              %10.2f\n", area);

      return 0;
} /*main*/

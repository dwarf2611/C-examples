/*This program prompts the user to enter an angle measured
in radians and converts it into degrees.
Written by : Dwarf2611
Date: 12-01-2021
*/
#include <stdio.h>

#define DEGREE_FACTOR 57.295779

int main (void)
{
    /*Local Definitions*/
    double radians;
    double degrees;

    /*Statements*/
    printf("Enter the angle in radians: ");
    scanf("%lf", &radians);

    degrees = radians * DEGREE_FACTOR;

    printf("%6.3f radians is %6.3f degrees \n",
    radians, degrees);
    return 0;
}/*main*/
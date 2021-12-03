/* This program shows how to change a temperature in 
Fahrenheit to Celsius
Written by : Dwarf2611
Date: 12-01-2021
*/
#include <stdio.h>

#define CONVERSION_FACTOR (100.0/180.0)

int main (void)
{
    /*Local Definitions*/
    float cel;
    float fah;
    
    /*Statements*/ 
    printf("Enter the Temperature in Fahrenheit : ");
    scanf("%f", &fah);

    cel = CONVERSION_FACTOR * (fah - 32);

    printf("Fahrenheit temperature is : %5.1f\n", fah);
    printf("Celsius temperature is : %5.1f\n", cel);

    return 0;
}/*main*/
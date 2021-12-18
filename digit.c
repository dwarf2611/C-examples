/*This program prints the first digits of an integer 
read from the keyboard
Written by: Dwarf2611.
Date : 12-18-2021.
*/
#include<stdio.h>

/*Prototype Declarations*/
int firstDigit (int num);

int main (void)
{
/*Local Definitions */
int number;
int digit;

/*Statements*/
printf("Enter an integer: ");
scanf ("%d", &number);

digit=firstDigit (number);
printf ("\nLeast significant digit is: %d\n", digit);

return 0;
}/*main*/

/*========================= firstDigit ==============================
This function extract the least significant digit 
of an integer.
Pre num contains an integer
Post Return least significant digit.
*/
int firstDigit (int num)
{
    /*Statements */
    return (num % 10);
}/* firstDigit*/
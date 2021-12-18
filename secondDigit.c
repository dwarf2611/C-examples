/* This program extracts and adds the two least
significant digits of an integer.
Written by Dwarf2611.
Date : 12-18-2021.
*/
#include <stdio.h>

/*Prototype Declarations*/
int addTwoDigits (int num);
int firstDigit (int num);
int secondDigit (int num);

int main (void)
{
    /*Local Definitions*/
    int number;
    int sum;
    
    /*Statements*/
    printf("Enter a integer: ");
    scanf ("%d", &number);

    sum = addTwoDigits (number);
    printf ("\nSum of last two digits is: %d\n", sum);

    return 0;
} /*main*/

/*====================== addTwoDigits =============================
Adds the first two digits of an integer.
Pre num contains an integer
Post returns sum of two least significant digits
*/
int addTwoDigits (int number)
{
    /*Local Definitions*/
    int result;

    /*Statements*/
    result = firstDigit (number) + secondDigit (number);
    return result;
} /* addTwoDigits*/

/* ======================== firstDigit ============================
Extract the least significant digit of an integer.
Pre num contains an integer
Post Returns least significant digit.
*/
int firstDigit (int num)
{
    /*Statements*/
    return (num %10);
} /*firstDigit*/

/* ======================= seconDigit ==============================
Extract second least significant (10s) digit
Pre num is an integer
Post Returns digit 10s position
*/
int secondDigit (int num)
{
    /*Local Definitions*/
    int result;

    /*Statements*/
    result = (num /10) % 10;
    return result;
}/* secondDigit*/
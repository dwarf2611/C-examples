/*This program demonstrate functions call by calling 
a small function to multiply two numbers.
Written by: Dwarf2611
Date: 12-05-2021
*/
#include <stdio.h>

/*Prototype Declarations*/
int multiply (int num1, int num2);

int main (void)
{
/*Local Definitions*/
 int multiplier;
 int multiplicand;
 int product;

/*Statements*/
 printf("Enter two integers:   ");
 scanf("%d%d", &multiplier, &multiplicand);

 product=multiply(multiplier, multiplicand);

 printf("Product of %d * %d is %d\n", multiplier, multiplicand, product);
 return 0;
}/*main*/
/*============================multiply==================================
Multiplies two numbers and return product.
 Pre num1 & num2 are values to be multiplied
 Post product returned
 */
int multiply (int num1,
              int num2)
{
    /*Statements*/
    return (num1 * num2);
}/*multiply*/
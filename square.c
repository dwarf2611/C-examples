/*This program reads a number and prints its square.
Written by: Dwarf2611
Date:12-05-2021
*/
#include <stdio.h>

/*Prototype Declarations*/
int getNum (void);
int sqr (int x);
void printOne (int x);

int main (void)
{
/*Local Definitions*/
int a;
int b;

/*Statements*/
 /*Get number and square it*/
 a = getNum ();

 /*Square the number just read*/
 b = sqr (a);

 /*Now print it*/
 printOne(b);

 /*Done.Return to operating system. */
 return 0;
} /*main*/

/*======================== getNum ========================================
Read number from keyboard and return it.
      Pre nothing
      Post number and returned
*/
int getNum (void)
{
/*Local definitions*/
   int numIn;

/*Statements*/
   printf("Enter a number to be squared:    ");
   scanf ("%d", &numIn);
   return numIn;
}   /*getNum*/

/* ====================== sqr =============================================
Return the square of the parameter.
  Pre x contains number to be squared
  Post square value returned
*/
int sqr (int x)
{
/*Statements*/
 return (x*x);
}/*sqr*/

/* ======================= printOne =======================================
Print one integer value.
Pre x contains number to be printed
Post value in x printed
*/
void printOne (int x)
{
/*Statements*/
 printf("The value is: %d\n", x);
 return;
}/*printOne*/

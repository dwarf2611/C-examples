/*This program demonstrates that one function can be called
multiple times.
Written by: Dwarf2611
Date: 12-05-2021
*/
#include <stdio.h>

/*Prototype Declarations*/
void printOne (int x);

int main (void)
{
/*Local definitions*/
int a;

/*Statements*/
/*First call*/
a=5;
printOne (a);

/*Second call*/
a=33;
printOne (a);

/*Done. Return to operating system. */
return 0;
}/*main*/

/* ========================= printOne ===================================
Print one integer value.
  Pre x contains number to be printed
  Post value in x printed
*/
void printOne (int x)
{
/*Statements*/
 printf("%d\n", x);
 return;
} /*printOne*/
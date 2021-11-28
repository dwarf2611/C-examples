/* This program calculates and prints the sum of 
three numbers input by the user at the keyboard.
Written by Dwarf2611
Date: 11-24-2021
*/
#include <stdio.h>

int main (void)
{
    /* Local definitions*/
    int a;
    int b;
    int c;
    int sum;

    /*statements*/
    printf("\nWelcome. This program adds\n");
    printf("three numbers. Enter three numbers\n");
    printf("in the form : nnn nnn nnn <return>\n");

    scanf("%d %d %d" , &a, &b, &c);
   
    /* numbers are now in a, b and c. Add them. */
    sum = a + b + c;

    printf( "The total is: %d\n\n", sum);
   
    printf("Thank you. Have a Good day.\n");
    return 0;
} /*main */

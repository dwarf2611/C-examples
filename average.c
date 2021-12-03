/* This program calculates the average of four integers and prints 
the number and their deviation from the average
Written by: Dwarf2611
Date: 12-01-2021
*/
#include <stdio.h>
int main(void)
{
    /*Local Definitions*/
    int num1;
    int num2;
    int num3;
    int num4;
    int sum;

    float average;

    /*Statement*/
    printf("\nEnter the first number : ");
    scanf("%d",&num1);
    printf("\nEnter the second number : ");
    scanf("%d",&num2);
    printf("\nEnter the third number : ");
    scanf("%d",&num3);
    printf("\nEnter the fourth number : ");
    scanf("%d",&num4);

    sum  = num1 + num2 + num3 + num4;
    average = sum/4.0;

    printf("\n ******** average is %6.2f ********** ", 
    average);
    printf("\n");

    printf("\nfirst number: %6d -- deviation : %8.2f", 
    num1, num1 - average);
    printf("\nsecond number: %6d -- deviation : %8.2f", 
    num2, num2 - average);
    printf("\nthird number: %6d -- deviation : %8.2f", 
    num3, num3 - average);
    printf("\nfourth number: %6d -- deviation : %8.2f\n", 
    num4, num4 - average);

    return 0;
}/*main*/

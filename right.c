/* Print the rightmost digit of an integer.
Written by: Dwarf2611
Date: 12-01-2021
*/
#include <stdio.h>

int main (void)
{
    /*Local Definitions*/
    int intNum;
    int oneDigit;

    /*Statements*/
    printf("Enter an integral numbers: ");
    scanf("%d", &intNum);

    oneDigit = intNum % 10;
    printf("\nThe right digit is: %d\n", oneDigit);

    return 0;
}/*main*/
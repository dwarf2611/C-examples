/*Demonstrate examples of compound assigments
Written by: Dwarf2611
Date: 11-29-2021 
*/
#include <stdio.h>

int main (void)
{
    /*Local definitions */
    int x;
    int y;
    
    /* statements*/
    x=10;
    y=5;

printf("x: %2d | y: %2d ", x,y);
printf(" | x*=y: %2d ", x*=y);
printf(" | x is now: %2d\n ", x);

x=10;
printf("x:%2d | y:%2d ", x,y);
printf(" | x/=y:%2d ", x/=y);
printf(" | x is now: %2d\n ", x);

x=10;
printf("x:%2d | y:%2d ", x,y);
printf(" | x%%=y:%2d ", x%=y);
printf(" | x is now: %2d\n ", x);

return 0;
} /*main*/

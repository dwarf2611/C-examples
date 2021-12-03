/* Calculates the total sale given the unit price,
quantity, discount, and tax rate.
Written by: Dwarf2611
Date:
*/
#include <stdio.h>

#define TAX_RATE 8.50

int main (void)
{
    /*Local Definitions*/
    int quantity;
    
    float discountRate;
    float discountAm;
    float unitPrice;
    float subTotal;
    float subTaxable;
    float taxAm;
    float total;

    /*Statements*/
    printf("\nEnter number of itens sold:          ");
    scanf("%d", &quantity);

    printf("\nEnter the unit price:          ");
    scanf("%f", &unitPrice);

    printf("\nEnter the discount rate:          ");
    scanf("%f", &discountRate);

    subTotal  = quantity * unitPrice;
    discountAm = subTotal * discountRate / 100.0;
    subTaxable = subTotal - discountAm;
    taxAm = subTaxable * TAX_RATE/100.0;
    total = subTaxable + taxAm;

    printf("\nQuantity sold:    %6d\n", quantity);
    printf("Unit Price of Items: %9.2f\n",unitPrice);
    printf("                          -------\n");

    printf(" Subtotal :       %9.2f\n", subTotal);
    printf(" Discount :       -%9.2f\n", discountAm);
    printf(" Discounted total :       %9.2f\n", subTaxable);
    printf(" Sale Tax :       +%9.2f\n", taxAm);
    printf(" Total Sale :       %9.2f\n", total);

    return 0;
}/*main*/
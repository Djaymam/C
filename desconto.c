#include <stdio.h>
#include <stdlib.h>

float discount(float price, float tax);

int main(void){

    float price;
    float tax;
    printf("Product price: $");
    scanf("%f",&price);

    printf ("Discount: ");
    scanf("%f",&tax);

    float newPrice=discount(price, tax);

    printf("You Price whith Discount is: $%.2f",newPrice);
    

    return 0;
}

float discount(float price, float tax){


    return price-((tax/100)*price);
}
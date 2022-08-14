#include <stdio.h>
#include<stdlib.h>


float iva(float price, float tax);



int main(void){
    float tax;
    float price;
    printf("Base Product Price: ");

    scanf("%f",&price);
    printf("Tax:");
    scanf("%f",&tax);

    float newPrice = iva(price, tax);

    printf("Your new price is: %.2f",newPrice);

    return 0;
}

float iva(float price, float tax){

    return price*((100+tax)/100);

}
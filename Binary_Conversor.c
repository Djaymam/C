#include <stdio.h>

int main(void){
    
    int dividendo;
    int divisor = 2;
    
    printf("Number to convert: ");
    scanf("%d", &dividendo);
    
    while (dividendo!=0)
    {
        int divisao =dividendo/divisor;
        //printf("%d",divisao);
        int resto = dividendo%divisor;
        printf("%d",resto);
        dividendo=divisao;
    }
}


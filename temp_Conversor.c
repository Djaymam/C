#include <stdio.h>
#include <ctype.h>

int main(void){

    char unit;
    float temp;

    printf("\n Is the temp, is in (F) or (C)?");
    scanf("%c",&unit);

    if (unit=='F' || unit=='f')
    {
       printf("\nThe temp. selected is %c !\n",unit);
       printf("=============================\n");
       printf("Temp. to convert in C: ");
       scanf("%f",&temp);
       float tempInC=(temp-32)*5;

       printf("\nThe temp. is %.2f C",tempInC);


    }else if (unit=='C' || unit=='c')
    {
        printf("\nThe temp. selected is %c\n",unit);
        printf("=============================\n");
        printf("Temp. to convert in F: ");
        scanf("%f",&temp);
        float tempInF=(temp*9)+32;
        printf("\n=============================");
        printf("\nThe temp. is: %.2f F.",tempInF);
        //(temp*9)+32
    }else{
        printf("Please Select F or C");
    }

    printf("\n=============================");
    

    return 0;
}
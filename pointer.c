#include <stdio.h>
#include <stdlib.h>



int main (void){
   

    int phone= 9777879;
 
    int* mAdress=&phone;
    int* C=&phone;

    printf("MAdress: %p\n",mAdress);
    printf("%p\n",C);

    printf("MAdressavalue: %d",*mAdress); ///to print the value in the pointer u use *

    *mAdress=9929666 ;

    printf("\nPhone: %d",phone);  //you can put new value useinf the pointer variable
    

    
/*
   double salary;
    printf("You Salary: ");
    scanf("%lf",&salary);

    double* Adress=&salary;

    printf("You salary is : %.2lf", *Adress);

    *Adress=salary*2;

    printf("\nYou new Salary is: %.2lf",salary);
*/
    return 0;
}
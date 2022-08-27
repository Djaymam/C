#include <stdio.h>


int main (void){
    /*

    int phone= 9777879;

    int* mAdress=&phone;

    printf("MAdress: %p\n",mAdress);

    printf("MAdressavalue: %d",*mAdress); ///to print the value in the pointer u use *

    *mAdress=9929666 ;

    printf("\nPhone: %d",phone);  //you can put new value useinf the pointer variable

    */

   double salary;
    printf("You Salary: ");
    scanf("%lf",&salary);

    double* Adress=&salary;

    printf("You salary is : %lf", *Adress);

    *Adress=salary*2;

    printf("\nYou new Salary is: %lf",salary);

    return 0;
}
#include <stdio.h>



 int main(void)
{
    printf("hello, world\n");

    short age = 29;  //for small int you can use short

    int phone, bi, NIF;   // int can store 4 bytes values and double can store 8 bytes values
    phone = 9777879;
    bi = 400672;
    NIF = 9999999;  //

    printf("My phone number is:%d\n", phone);  // to print int use %d
    printf("My BI:%d", bi);
    printf("\nmy NIf is: %d",NIF);


    //float (store 4 bytes use %f to print) vs double (same type as float but store up to  8 bytes values %lf to print)

    float  number1 = 15.5;
    double number2 = 16.95;
   // long number3 = 4000000000;  fix this later

    printf("\nthe number 1 is: %f \n",number1); //you can use .n to specify how many decimal you want ex .2f or .2lf for double
    printf("the 2 number is : %.2lf",number2); //
    //printf("this is a long number: %d",number3);

    printf("My age is: %d \n",age); //%d is format especify for int data type
    
    printf("I like Pizza and Chocolate\n");

    printf("Roses are red,\nviolets are blue,\nand i want to fuck you!\n");

    
    return 0;

}
// this is a comment

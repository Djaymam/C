#include <stdio.h>

char operator;
int x;
int y; 
int result;
int main(void){

printf("Operation: ");
scanf(" %c",&operator);
//get imput of first numer
printf("Type first number! \n");
scanf("%d",&x);
//get imput of the second number
printf("Type the secund number!\n");
scanf("%d",&y);
//get input of the operator
 // por sempre o espaco antes de %c


//calculation
if (operator=='+'){
    result= x+y;
    printf("\nThe Sum is: %d", result);

}else if (operator=='-'){
    result=x-y;
    printf("\nThe Subtration is: %d", result);
    
 }else if(operator=='*') {
    result=x*y;
    printf("\nThe Multiplication is: %d", result);

 }else if(operator=='/'){
   double result= (float) x / (float) y;
    printf("\nThe Division is: %f", result);

 }else{
    printf("\nError 404!! Something whent wrong!!\n Invalid Operator!!");
   

 }


}

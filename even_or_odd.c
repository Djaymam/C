#include <stdio.h>
#include <stdlib.h>


int main(){

    int number;

    printf("Type a integer number? ");
    scanf("%d",&number);
    int rest = number % 2;
    
    if (rest=0)
    {
        printf("The number is even!!");
    }else if(rest=1){

        printf("The number is ODD!");

    }else{
        printf("ERROR 404!!");

    }
    

    return 0;
}
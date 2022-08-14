#include <stdio.h>

int main(void){
    int number;
    printf("Number: ");
    scanf("%d",&number);
    /*
    int count=1;
    //forma normal
    
    while (count<=10)
    {
        int multiply=number*count;
        printf("%d*%d=%d\n",number,count,multiply);
        count=count+1 ;
    }*/
    
    /*
    //forma inversa
    int count=10;
    while (count>=1)
    {
        int multiply=count*number;
        printf("%d*%d=%d\n",number,count,multiply);
        count=count-1;
        
    }*/
    printf("How many times to multiply? ");
    int time;
    scanf("%d",&time);
    int count=1;
    while (count<=time)
    {
        int multiply=number*count;
        printf("%d*%d=%d\n",count,number,multiply);
        count=count+1;
    }
    return 0;
}

//
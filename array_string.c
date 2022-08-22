#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    //int number[]={68,106,97,121,};
    //int length=4;
    
    char name[20];
    printf("What you name? ");
    scanf("%s",name);
    int length=strlen(name);

    /*
    for ( int i = 0; i < length; i++)
    {
       printf("%d\n",name[i]);
    }*/
    

    return 0;
}
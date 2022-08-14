#include <stdio.h>
#include <stdlib.h>

int main(void){
    char name[20];
    char lastName[20];
    printf("Whats your name? ");
    scanf("%s",&name);
    printf("Your Last Name? ");
    scanf("%s",lastName);

    printf("You name is: %s %s",name,lastName);


}
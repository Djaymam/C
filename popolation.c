#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int n, f, year;
    
    year=0;
    do
    {
       // TODO: Prompt for start size
        printf("Populacao Inicial: ");
        scanf("%d",&n);

    // TODO: Prompt for end size
        printf("Populacao Final: ");
        scanf("%d",&f);
    } while (n<9 || f<=n);
   
    int population=n;

    
    // TODO: Calculate number of years until we reach threshold
    while (population<f)
    {
        int birth=population/3;      //calc new poplt
        int death=population/4;      //deat population
        population=population+birth-death; //new popopl value
        year++;  
    }

    printf("has pass: %d",year);
    

    



    // TODO: Print number of years
}
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int population, populationFinal, year;
    year=0;

    //population validation
    do
    {
       // TODO: Prompt for start size
        printf("Populacao Inicial: ");
        scanf("%d",&population);

    // TODO: Prompt for end size
        printf("Populacao Final: ");
        scanf("%d",&populationFinal);
    } while (population<9 || populationFinal<=populationFinal);
   
    

    
    // TODO: Calculate number of years until we reach threshold
    while (population<populationFinal)
    {
        int birth=population/3;      //calc new poplt
        int death=population/4;      //death population
        population=population+birth-death; //new popopl value
        year++;  //year count
    }

    //Printing number of years
    printf("has pass: %d",year);

}
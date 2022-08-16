#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count,i,k;
    
    
    do
    {
        printf("Type a number (2-10): ");
        scanf("%d", &count);
        
    } while (count>10 || count<=1);

    for (i = 1; i <= count; i++) //print the collums
    {
        
        for (int k = 1; k <= i; k++)  
        {  
            printf("#");
            // print the Star 
        }  
        printf ("\n");
      
    }
    return 0;
}


    



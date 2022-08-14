#include <stdio.h>
#include <stdlib.h>

char render();

int main(void)
{
    int count;
    printf("Size: ")
        scanf("%d", &count);
    /*int n;
    do
    {
        printf("#");
        printf("\t");
    } while (count<n);*/

    for (int i = 0; i < count; i++)
    {

        for (int i = 0; i < 1; i++)
        {
            printf("#");
            printf("\t");
            printf("#");
        }

        printf("\n");
    }

    return 0;
}
#include <stdio.h>

typedef char* string;


typedef struct
{
   int red;
   int green;
   int blue;
} color;


typedef struct 
{
    string name;
    int age;
    color favorite_color;

} person; 

int main(void){
    person fabio;
    
    fabio.name="Fabio";
    fabio.age= 17;
    fabio.favorite_color.red=255;

    printf("%d\n",fabio.age);
    printf("%s\n",fabio.name);
    printf("%d\n",fabio.favorite_color.red);
    printf("%d\n",fabio.favorite_color.blue);
    printf("%d\n",fabio.favorite_color.green);

    

    return 0;
}




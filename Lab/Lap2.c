#include <ctype.h>
//#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
//char letters[] = {A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q,  R, S, T, U, V, W, X, Y, Z};
int   POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
             //   65                                                                            90

//int compute_score(word);

int main(void)
{

    char word1[30];
    char word2[30];

    // Get input words from both players
    printf("Players You Word!\nPlayer1: \n");
    scanf("%s",word1);
    printf("Player2: ");
    scanf("%s",word2);
    
    //words Verification
    printf("%s and %s\n",word1,word2);
    //words length
    int length1=strlen(word1);
    int length2=strlen(word2);


    // Score both words
   int score1=0;

   for (int i = 0; i < length1; i++)
   {
    
    if (word1[i]<='A')
    {
        /* code */
    }
    
    
    
    //int score = (int)word1[i];

    //printf("%d\n",score);
   /* if (score)
    {
       
    }*/
    

   }
   



   int score2;



    // TODO: Print the winner
}






/*
int compute_score(word)
{

    //POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    // TODO: Compute and return score for string
    int score;
    int lenght=strlen(word);

    for (int i = 0; i <91; i++)
    {
        
    }
    
    
    if ()
    {
        
    }
    
    
}*/
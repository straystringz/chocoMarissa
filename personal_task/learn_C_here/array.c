#include <stdio.h>
#include <stdlib.h>


//Understanding arrays

int main(void)
{
    int score[3];
    int i = 0;

    //getting user's scores
    do{
    printf("\nPlease enter score %i: ", i+1);
        scanf(" %i", &score[i]);;
    i++;
    }
    while(i<3);
    {
        printf("\nYour average is %f", (score[0] + score[1] + score[2]) / (float) 3);
    }
    
    //I want to try it with for loop.
    
    score[3];
    
    for( i = 0; i < 3; i++)
    {
        printf("\nPlease enter score %i: ", i+1);
        scanf(" %i", &score[i]);
    }
    printf("\nYour Average is: %f\n", (score[0] + score[1] + score[2]) / (float) 3);
}

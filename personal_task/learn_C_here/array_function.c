#include <stdio.h>
#include <stdlib.h>


//This code is to test my function prototyping skills



float average(int array[]);
int main(void)
{
    //Firstly lemme check my previous skills
    
    int score[3];
    int i = 0;
    const int N = 4
    
   
    
    for( i = 0; i < 3; i++)
    {
        printf("Please enter score %i: ", i+1);
        scanf(" %i", &score[i]);
    }
    printf("\nYour Average is: %f\n", (score[0] + score[1] + score[2]) / (float) 3);
}


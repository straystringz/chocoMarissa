#include <stdio.h>
#include <stdlib.h>
#include <cs50.h


//This code is to test my function prototyping skills

const int N = 3;

float average( int array[]);

int main(void)
{
    //Firstly lemme check my previous skills

    int scores[N];

    for( int i = 0; i < N; i++)
    {
        printf("Please enter score %i: ", i+1);
        scanf(" %i", scores);
    }
    printf("\nYour Average is: %f\n",  average( scores ));
}


float average(int array[])
{
    int sum = 0;
    for(int i = 0; i < N; i++)
    {
        sum += array[i];
    }
    return (sum/(float)N);
}

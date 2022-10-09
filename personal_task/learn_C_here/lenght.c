#include <stdio.h>
#include <string.h>
#include <stdlib.h>



//This code will get the lenght of a string

int main (void)
{
    
    char name[100];
    int i = 0;
    
    
    printf("Type in any string: " );
    fgets(name, sizeof name, stdin);
    
    
    while( name[i] != '\0' )
    {
        i++;
    }
    printf("You have %i letters in your name\n", i-1);
}
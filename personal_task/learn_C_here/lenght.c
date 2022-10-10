#include <stdio.h>
#include <string.h>
#include <stdlib.h>



//This code will get the lenght of a string

int main (void)
{
    
    char name[100];
    int i = 0;
    
    
    printf("Type in any string: " );
    scanf("%[^\n]s", name); //To make scanf take more than one string, use "%[^\n]s" instead of just %s.
    
    //or you can use fgets but, you have to check the user input not to go above required input -1
    
    
    while( name[i] != '\0' )
    {
        i++;
    }
    printf("You have %i letters in your name\n", i);
}

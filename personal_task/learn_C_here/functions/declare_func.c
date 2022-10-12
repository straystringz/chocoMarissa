#include <stdio.h>

//Function declaration (prototyping);

/** 
 * This is a process of declaring the properties of a function.
 * 
 * this is a good way you can hint the compiler to expect something (a function ) other than "main".
 * 
 * Syntax return_type func_name (input);
 * the input can hold different types of parrameters(int, char, ...) "it's not compulsory to add input parameter names, just their types are enough"
 * 
 * notice the semi-colon at the end... this differenciates a prototype from the function itself(Func prototype must end with a semi-colon);
 * 
 */
 
 
 char fun(); // Function declaration/prototyping
 
int main()
{
    char c = fun();//from here the controle skips to look for the function called(in this case, 'fun')
    printf("Character is: %c\n", c);
}

char fun()//note that the function must match wit the prototype format.
{
    return 'a';
}

//As good practice, I reccomend that you prototype a function before using it
//implicit = assumes a different type
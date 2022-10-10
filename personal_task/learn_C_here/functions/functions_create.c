#include <stdio.h>
#include <stdlib.h>


/**
 * This is my first try with functions
 * Functions are set of statments that take inputs, computes them and produces outputs
 * 
 * Syntax: return_type func_namne (inputs)
 * {
 *     all computation goes here
 *      return value
 * }
 */
 
 //this is a simple test function
 
 int area_Func (int lenght, int breadth)
 {
     int area;
     area = lenght * breadth;
     return (area);
 }
 
 
 int main ()
 {
     int l, b, area;
     
     
     printf("Input lenght: \n");
     scanf(" %i", &l);
     
     printf("Input breadth: \n");
     scanf("%i", &b);
     
     area = area_Func(l, b);
     
     printf("%d\n", area);
     
 }
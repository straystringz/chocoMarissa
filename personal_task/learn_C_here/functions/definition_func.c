#include <stdio.h>

/**
 * Function definitiin consists of block of code which is capable of performing some specific tasks.
 * 
 * while calling a function, don't mention the return type of the function not even the data types of the arguments(only names)
 * 
 * bellow is a function definition in C
 * 
 * int add(int a, int b)
 * {
 * int sum;
 * sum = a + b;
 * return sum;
 * }
 */
 
 int add(int, int); //prototype(It's tot compulsory to mention names of parameters here)
 
 int main ()//main function
 {
     int m = 20, n = 30, sum;
     sum = add(m, n);//here the function 'add' was called hence the compiler will skip to line 31 to check the definition. "Remeber to only mention the arg's name"
     printf("Summ is: %d\n", sum);
     
     return 0;
 }
 
 
 
 int add(int a, int b)//Function definition(mention datatype of function and names of parameters)
 {
     return(a+b); //The compiler will return the result to line 23
 }
 
#include <stdio.h>
#include <stdlib.h>

//Actual parameters are such that are passed to a function
//Formal parameters are the parameters that are recieved by the function


/**
 * Call by value: Values of actual parameters will be copied to formal parameters and they both store values in different locations.
 * 
 * e.g
 * 
 *
 
  int fun(int x, int y);
  
  int main (void)
  {
  int x= 10, y = 20;
  fun(x, y);
  printf(" %d and %d", x, y);
  }
  
  
  int fun(int x, int y)
  {
  x = 20;                      
  y = 10;                      
  }
  //Note that the changes made in the formal parameter will not affect the values of the actual parameter
 */
  
//*************************************************************************************************************************************************************
  
  
/**
 * Call by reference: Both actual and formal parameters refers to same memory location.
 * Any changes made to the formal parameter will affect the actual parameter.
 * Instead of passing values, we pass addresses using pointers.
 * pointers are variables which can store addresses of some other variables.
 */
 
 int fun(int *ptr1, int *ptr2);
  
  int main (void)
  {
  int x= 10, y = 20;
  fun(&x, &y);
  
  printf(" %d and %d", x, y);
  }
  
  
  int fun(int *ptr1, int *ptr2)
  {
     *ptr1 = 20;    //ptr1 stores the address of the 'x'. now adding an '*' before ptr1 simply states tha we should access the value of what is in 'ptr1'...(Dereference operator)               
     *ptr2 = 10;                      
  }
  
  //Notice how changes made in the formal parameter affected because of the 'call by reference'?
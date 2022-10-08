#include <stdio.h>

//This is just a basic "Hello, World file

int main(void)
{
	printf("Hello, Victor\n");
	
	
	int x = 4;
	int *my_ptr = &x;
	
	printf("x is = %d and my_ptr is =%p\n", x, my_ptr);
	
	return 0;
}

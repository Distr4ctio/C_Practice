#include <stdio.h>

// Variable Declaration:

extern int a, b;
extern int c;
extern float f;

int main() 
{
	/*Variable definition: */
	int a, b;
	int c;
	float f;

	/*Initialization */
	a = 10;
	b = 20;
	
	c = a + b;
	printf("Value of c: %d \n", c);

	f = 70.0/3.0;
	printf("value of f: %f \n", f);

	return 0;
}


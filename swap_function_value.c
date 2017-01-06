#include <stdio.h>

/*function declaration*/

void swap(int x,int y);

int main ()
	{
		/*local variable declaration */
		int a = 100;
		int b = 200;

		printf("Before swap, value of a: %d\n", a);
		printf("Before swap, value of b: %d\n", b);

		/*calling swap function to swap the values of a and b */
		swap(a, b);

		printf("After swap, value of a: %d\n", a);
		printf("After swap, value of b: %d\n", b);

		return 0;
	}


/* function definition to swap the values */

void swap(int x, int y)
	{
		int temp;

		temp = x; /* save the value of x */
		x = y; /*put the value of y into x */
		y = temp; /*put temp into y */
		return;
	}

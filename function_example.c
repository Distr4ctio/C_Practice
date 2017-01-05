#include <stdio.h>

/* function declaration */

int max(int num1, int num2);
int main ()
	{
		/* Local variable declaration */
		int a = 100;
		int b = 200;
		int ret;

		/*calling funtion to get max value*/
		
		ret = max(a, b);

		printf( "Max value is : %d\n", ret);

		return 0;
	}

/* function returning the max value between two numbers */

int max(int num1, int num2)
	{
		/*Local variable declaration */
		int result;

		if (num1 > num2)
			result = num1;
		else
			result = num2;
		return result;
	}


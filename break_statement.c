#include <stdio.h>

int main()
	{
		/*local variable definition */
		int a = 10;

		/*while loop execution */
		while( a < 20 )
			{
				printf("Value of a: %d\n", a);
				a++;
				if (a > 15)
					{
						/*Terminate the loop using break statement */
						break;
					}
			}
		return 0;
	}


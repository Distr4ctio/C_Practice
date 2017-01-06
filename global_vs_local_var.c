#include <stdio.h>

/*Global variable declaration */

int g = 20;

int main()
	{
		/*local variable declaration*/
		int g = 10;
		printf("local = 10, global = 20, below we will call g");
		printf("value of g = %d\n", g);

		return 0;
	}

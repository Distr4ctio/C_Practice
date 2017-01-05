#include <stdio.h>

int main ()
	{
	/* local variable definition */
	int a = 100;
	
	/* check the boolean condition */
	if(a == 10)
		{
		
		/* if condition is true then print the following */
		printf("Value of A is 10\n");
		}
	else if(a == 20)
		{

		/* if else if condition is true */
		printf("Value of A is 20\n");
		}
	else if(a == 30)
		{
		
		/* if else if condition is true */
		printf("Value of A is 30\n");
		}
	else
		{
		
		/* if none of the conditions are true */
		printf("None of the values tested match variable A.\n");
		}

	printf("The exact value of A is: %d\n", a);
	
	return 0;
}

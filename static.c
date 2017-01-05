#include <stdio.h>

/* Function Declaration */
void func(void);

static int count = 5; /*Global Variable */

main()
	{
	while(count--)
		{
			func();
		}
	return 0;
	}

/*Function Definition*/
void func( void )
	{
	static int i = 5; /*local Static Var*/
	i++;
	printf("i is %d and count is %d\n", i, count);
	}

#include <stdio.h>

int main()
	{
	/* local variable definition */
	
	char grade = 'B';
	
	switch(grade)
		{
		case 'A' :
			printf("Excellent!\n");
			break;
		case 'B' :
		case 'C' :
			printf("Well done\n");
			break;
		case 'D' :
			printf("You passed.\n");
			break;
		case 'F' :
			printf("Better luck next time!\n");
			break;
		default :
			printf("The grade entered is not valid");
		}
	printf("Your grade is %c\n", grade);
	return 0;
}

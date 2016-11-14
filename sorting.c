#include <stdio.h>

int main(void)
{
	float a, b, c;
	char d;
	
	printf("Enter three numbers seperated by a space:\n");
	scanf("%f %f %f", &a, &b, &c);
	
	printf("Would you like these numbers to be sorted in [a]scending or [d]escending order?\n");
	scanf("\n%c", &d);
	
	switch(d)
	{
		case 'a':
		if (a>b && b>c)
				printf("The numbers in ascending order are: %f, %f, %f\n", c, b, a);
			else if (a>c && c>b)
				printf("The numbers in ascending order are: %f, %f, %f\n", b, c, a);
			else if (b>a && a>c)
				printf("The numbers in ascending order are: %f, %f, %f\n", c, a, b);
			else if (b>c && c>a)
				printf("The numbers in ascending order are: %f, %f, %f\n", a, c, b);
			else if (c>a && a>b)
				printf("The numbers in ascending order are: %f, %f, %f\n", b, a, c);
			else
				printf("The numbers in ascending order are: %f, %f, %f\n", a, b, c);
			break;
		case 'd':
			if (a>b && b>c)
				printf("The numbers in descending order are: %f, %f, %f\n", a, b, c);
			else if (a>c && c>b)
				printf("The numbers in descending order are: %f, %f, %f\n", a, c, b);
			else if (b>a && a>c)
				printf("The numbers in descending order are: %f, %f, %f\n", b, a, c);
			else if (b>c && c>a)
				printf("The numbers in descending order are: %f, %f, %f\n", b, c, a);
			else if (c>a && a>b)
				printf("The numbers in descending order are: %f, %f, %f\n", c, a, b);
			else
				printf("The numbers in descending order are: %f, %f, %f\n", c, b, a);
	
			break;
		default:
			printf("Error! This answer was not accepted\n");
			break;
	}
	
	return 0;
}
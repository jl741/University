#include <stdio.h>

// program to find the sum of the intergers individual digits.

int main()
{
	int number;
	int digit;
	int sum = 0;
	char c;
	
	do{
		printf("Enter the number\n");
		scanf("%d", &number);
		
		while(number>0)
		{
			digit = number%10;
			sum = sum + digit;
			number = number/10;
		}
		
		printf("Sum = %d\n", sum);
		printf("\n");
		
		getchar();
		printf("Do you want to run the process again? (y or n) \n");
		scanf("\n%c", &c);
		
		if(c == 'y')
			sum = 0;
		
	}while(c == 'y');
	
	return 0;
}
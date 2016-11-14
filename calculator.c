#include <stdio.h>
#include <unistd.h>

int main(void)
{
	float x, y, result;
	int a, b, result2;
	char c, d;
	
	printf("Do you want to calculate the modulus of two numbers (Enter y or n)?\n");
	scanf("%c", &c);
	
	switch(c)
	{
		case 'y':
			printf("Please enter two integers\n");
			scanf("%d %d", &a, &b);

			printf("Computing now\n");
			sleep(2);
			
			result2 = a%b;
			printf("The modulus is %d\n", result2);
			break;
			
		case 'n':
		
			printf("Please enter what you want to calculate\n");
			scanf("%f %c %f", &x, &d, &y);
		
			printf("Computing now\n");
			sleep(2);
			
			switch(d)
			{
				case '+':
					result = x+y;
					printf("The sum is %f\n", result);
					break;
					
				case '-':
					result = x-y;
					printf("The difference is %f\n", result);
					break;
					
				case '*':
					result = x*y;
					printf("The product is %f\n", result);
					break;
					
				case '/':
					result = x/y;
					printf("The quotient is %f\n", result);
					break;
					
				default:
					printf("ERROR in operator\n");
					break;
					
			}
			break;
			
		default:
			printf("Please enter either y or n");
			break;
			
	}
	
	if(c == 'y')
		printf("What you entered is: %d, modulus, %d", a, b);
	
	else	
		printf("What you entered is: %f, %c, %f\n", x, d, y, result);
		
	return 0;
}
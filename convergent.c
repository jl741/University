#include <stdio.h>
#include <math.h>

int main()
{
	int n, decimal, question; 
	double factorial = 1;
	double sum = 0;
	double last = 0;
	double total = 0;
	
	printf("Which question would you like answered (1-4)?");
	scanf("\n%d", &question);
	
	switch (question)
	{
		case 1:
			//Question One
			
			for(n=0;n<1000000;n++)
			{
				last = total;
				sum = 4*(4*(pow(-1,n)/(2*n+1)));
				total = sum+last;
			}
			break;
		case 2:
			//Question Two
			
			for(n=0;n<1000000;n++)
			{
				last = total;
				sum = 1/pow(2,n);
				total = sum+last;
			}
			break;
		case 3:
			//Question Three
			
			for(n=0;n<1000000;n++)
			{
				last = total;
				sum = pow(-1,n)/(n+1);
				total = sum+last;
			}
			break;
		case 4:
			//Question Four
			
			for(n=0;n<10;n++)
			{
				last = total;
				sum = 1/factorial;
				factorial *= n+1;
				total = sum+last;
			}
			break;
		default:
			printf("You have chosen ... poorly");
			break;
	}
	
	printf("How many decimal places would you like the approximation to (1-6)?:");
	scanf("\n%d", &decimal);
	
	switch (decimal)
	{
		case 1:
			printf("%.1f", total);
			break;
		case 2:
			printf("%.2f", total);
			break;
		case 3:
			printf("%.3f", total);
			break;
		case 4:
			printf("%.4f", total);
			break;
		case 5:
			printf("%.5f", total);
			break;
		case 6:
			printf("%.6f", total);
			break;
		default:
			printf("Fail");
			break;
	}
	return 0;
}
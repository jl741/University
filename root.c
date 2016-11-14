#include <stdio.h>
#include <math.h>

float f(float x) //original function
{
	return(pow(x,5)-0.5*pow(x,3)+x*sin(x)-0.4);
}

float g(float x) //derivative
{
	return(5*pow(x,4)-1.5*pow(x,2)+sin(x)+x*cos(x));
}

int main(void)
{
	char method;
	float x0, x1, xn, error;
	int count =1, n;
	
	printf("This will give you the root of the equation to 6 decimal places\n");
	printf("Do you want to use the Secant Method (s) or the Newton-Raphson Method (n)?:");
	scanf("%c", &method);
	
	switch(method)
	{
		case 's':
			printf("Enter the two values to search between:");
			scanf("%f%f", &x0, &x1);
			
			do{
				xn=(x0*f(x1)-x1*f(x0))/(f(x1)-f(x0));
				x0=x1;
				x1=xn;
				count++;
				if(count==100)
				{
					break;
				}
			}while(fabs(f(xn))>0.000005);
			
			printf("\nThe root between these values is %.6f\n", xn);
			break;
		
		case 'n':
			printf("Enter the starting value:");
			scanf("%f", &x0);
			
			do{
				xn=x0-f(x0)/g(x0);
				x0=xn;
				count++;
				if(count==10000)
				{
					break;
				}
			}while(fabs(f(xn)>0.000005));
			
			printf("\nThe root is %.6f\n", xn);
			break;
		
		default:
			printf("You have chosen ... poorly");
			break;
	}
}
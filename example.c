/* load required libraries */
#include <stdio.h>
#include <math.h>

/* define global constant */
#define Pi 3.141592654

/* declare functions */
double circumference(double);
double geom_series(int, double, double);

int main(void)
{
	int n;
	double r, a, sum, radius, circ;
	
	/* run first part */
	printf("Part 1: the geometric series\n");
	printf("This program calculates the sum of the first n terms\n");
	printf("of the geometric series a + ar + a^2 r^2 + ... + a r^(n-1)\n");
	
	/* prompt user input and read from console*/
	printf("Please enter n: ");
	scanf("%d",&n);
	printf("Please enter a: ");
	scanf("%lf",&a);  /* use %lf to read type double*/
	printf("Please enter r: ");
	scanf("%lf",&r);
	
	/* call function and store return value in sum */
	sum= geom_series(n,a,r);
	printf("The sum of the first %d terms is %f\n\n\n",n,sum);
	
	/* run second part */
	printf("2. Program: the circumference of a circle\n");
	printf("This program calculates the circumference of a circle\n");
	printf("Please enter the radius: ");
	scanf("%lf",&radius);
	
	/* call function and store return value in circ */
	circ= circumference(radius);
	printf("The circumference of a circle with radius %f is %f\n\n",radius,circ);

	return 0;
}

double geom_series(int n, double a, double r)
{
	double sum;
	
	if(r==1)
		sum= n;
	else
		sum= (1 - pow(r,n)) / (1 - r);
	
	sum*= a;
	
	return sum;
}

double circumference(double r)
{
	return 2*Pi*r;	
}

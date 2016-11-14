#include <stdio.h>
#include <math.h>

#define Pi 3.1415926535

double area_circle(double);
double area_ellipse(double, double);
double area_triangle(double, double);
double area_hexagon(double);

int main (void)
{
	double a, b, area;
	char c;
	
	printf("Would you like to calulate the area of:\n");
	printf("A circle (c)?\n");
	printf("An ellipse (e)?\n");
	printf("A triangle (t)?\n");
	printf("A hexagon (h)?\n");
	printf("Your input: ");
	scanf("%c", &c);
	
	switch (c)
	{
		case 'c':
			printf("YOU HAVE CHOSEN CIRCLE\n");
			printf("Please enter the radius of the circle:\n");
			scanf("%lf", &a);
			
			area= area_circle(a);
			printf("The area of the circle is %lf\n", area);
			break;
		case 'e':
			printf("YOU HAVE CHOSEN ELLIPSE\n");
			printf("Please enter the a and b:\n");
			scanf("\n%lf%lf", &a, &b);
			
			area = area_ellipse(a,b);
			printf("The area is %f\n", area);
			break; 
		case 't':
			printf("YOU HAVE CHOSEN TRIANGLE\n");
			printf("Please enter the base and the height:\n");
			scanf("%lf%lf", &a, &b);
			
			area = area_triangle(a,b);
			printf("The area is %f\n", area);
			break;
		case 'h':
			printf("YOU HAVE CHOSEN HEXAGON\n");
			printf("Please enter the a:\n");
			scanf("%lf", &a);
			
			area = area_hexagon(a);
			printf("The area is %f\n", area);
			break;
		default:
			printf("Error. This is not an accepted input.\n");
			printf("Please try again\n");
			break;
	}
	return 0;
}

double area_circle(double a)
{
	double area;
	area= Pi*pow(a,2);
	return area;
}

double area_ellipse(double a, double b)
{
	double area;
	area= Pi*a*b;
	return area;
}

double area_triangle(double a, double b)
{
	double area;
	area= ((a*b)/2);
	return area;
}

double area_hexagon(double a)
{
	double area;
	area= ((3*sqrt(3))/2)*pow(a,2);
	return area;
}
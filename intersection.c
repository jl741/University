#include <stdio.h>

void main(void)
{
	float m1, c1, m2, c2;
	float x1, y1, x2, y2;
	float dx, dy;
	float intersection_x, intersection_y;
	int c = 0;
	int x = 1;

	for(c=0;c<2;c++)
	{
		printf("Enter line values - x1: ");
		scanf("%f", &x1);

		printf("Enter line values - y1: ");
		scanf("%f", &y1);

		printf("Enter line values - x2: ");
		scanf("%f", &x2);

		printf("Enter line values - y2: ");
		scanf("%f", &y2);

			if((c=0)) // issues with this if.
			{
				dx = x2 - x1;
				dy = y2 - y1;

				m1 = dy / dx;

				c1 = y1 - m1 * x1;
			}

			else
			{
				dx = x2 - x1;
				dy = y2 - y1;

				m2 = dy/dx;

				c2 = y1 - m2 *x1;
			}

		printf("%d, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f\n", c, x1, y1, x2, y2, dx, dy, m1, c1, m2, c2);
	}

}
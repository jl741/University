#include <stdio.h>

int dimension(void);
void read_vectors(int, int, int[10]);
void calc_vec_sum(int, int, int[10], int[10], int[10]);

int main(void)
{
	int a; /*Dimension */
	int x[10], y[10], sum[10]; /* Arrays */
	int b; /* Counter */
	
	a=dimension();
	read_vectors(a, b, x);
	read_vectors(a, b, y);
	calc_vec_sum(a, b, x, y, sum);
	
	printf("The sum of the vectors is:\n");
	printf("\n");
	
	for(b=0;b<a;b++)
	{
		printf("%d \n", sum[b]);
	}
	
	return 0;
}

int dimension(void)
{
	int a;
	
	printf("Enter the dimension (Max 10)\n");
	scanf("\n%d", &a);
	
	return a;
}

void read_vectors(int a, int b, int x[10])
{	
	for(b=0;b<a;++b)
	{
		printf("Enter element %d of first vector\n",b);
		scanf("\n%d", &x[b]);
	}
}

void calc_vec_sum(int a, int b, int x[10], int y[10], int sum[10])
{
	for(b=0;b<a;b++)
	{
		sum[b]=x[b]+y[b];
	}
}
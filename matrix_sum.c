#include <stdio.h>

void dimension(int[2]);
void read_matrix(int[2], int, int, int[10][10]);
void calc_matrix_sum(int[2], int, int, int[10][10], int[10][10], int[10][10]);

int main(void)
{
    int x[2]; /*Dimensions */
	int a[10][10], b[10][10], sum[10][10]; /*Arrays */
	int i, j; /*Counters */

	dimension(x);
	printf("Enter the elements of the first matrix\n");
	read_matrix(x, i, j, a);
	printf("Enter the elements of the second matrix\n");
	read_matrix(x, i, j, b);
	calc_matrix_sum(x, i, j, a, b, sum);
    
	
    printf("\nSum of two matrix is: \n\n");

    for(i=0;i<x[0];++i)
    {
		for(j=0;j<x[1];++j)
        {

            printf("%d   ",sum[i][j]);

            if(j==x[1]-1)
            {
                printf("\n\n");
            }
        }
	}
	
    return 0;
}

void dimension(int x[2])
{
	printf("Enter number of rows (Max 10):");
	scanf("%d", &x[0]);
	
	printf("Enter number of columns (Max 10):");
	scanf("%d", &x[1]);
}

void read_matrix(int x[2], int i, int j, int a[10][10])
{
    for(i=0; i<x[0]; ++i)
    {
		for(j=0; j<x[1]; ++j)
        {
            printf("Enter element (%d,%d): ",i+1,j+1);
            scanf("%d", &a[i][j]);
        }
	}
}

void calc_matrix_sum(int x[2], int i, int j, int a[10][10], int b[10][10], int sum[10][10])
{
	for(i=0;i<x[0];++i)
    {
		for(j=0;j<x[1];++j)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
	}
}

//void print_matrix
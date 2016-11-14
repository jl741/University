#include <stdio.h>

void dimension(int[2]);
void read_matrix(int[2], int, int, int[10][10]);

int main(void)
{
	int x[2];
	
	dimension(x);
	printf("Enter the elements of the matrix");
	read_matrix(x, i, j, A);
	
	
}

void dimension(int x[2])
{
	printf("Enter number of rows (Max 10):");
	scanf("%d", &x[0]);
	
	printf("Enter number of columns (Max 10):");
	scanf("%d", &x[1]);
}

void read_matrix(int x[2], int i, int j, int A[10][10])
{
    for(i=0; i<x[0]; ++i)
    {
		for(j=0; j<x[1]; ++j)
        {
            printf("Enter element (%d,%d): ",i+1,j+1);
            scanf("%d", &A[i][j]);
        }
	}
}
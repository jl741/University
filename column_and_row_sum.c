#include <stdio.h>

void dimension(int[2]);
void read_matrix(int[2], int, int, int[10][10]);

int main(void)
{
	int x[2]; // Dimensions
	int A[10][10], R[10], C[10]; // Arrays
	int i, j; // Counters
	int *p, *r, *c; //Pointers
	
	p = &A[0][0];
	r = &R[0];
	c = &C[0];
	
	dimension(x);
	printf("Enter the elements of the matrix\n");
	read_matrix(x, i, j, A);
	
	for(i=0; i<x[0]; ++i)
    {
		*(r+i)=0;
		
		for(j=0; j<x[1]; ++j)
        {
			*(r+i)=*(r+i)+*(p+i+10*j);
		}
	}
	for(i=0; i<x[0]; ++i)
    {
		*(c+i)=0;
		
		for(j=0; j<x[1]; ++j)
        {
			*(c+i)=*(c+i)+*(p+j+10*i);
		}
	}
	
	printf("Row sum is:\n");
	
	for(i=0;i<x[0];++i)
    {
		printf("%d   ",R[i]);
		printf("\n\n");
	}
	
	printf("\n\n");
	printf("Column sum is:\n");
	
	for(j=0;j<x[1];++j)
    {
        printf("%d   ",C[j]);
	}
	printf("\n");
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

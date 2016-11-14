#include <stdio.h>

void dimension(int *);
void read_matrix(int[2], int[10][10]);
void transpose_matrix(int *, int*, int*);

int main(void)
{
	int A[10][10], B[10][10]; // Arrays
	int x[2]; // Dimensions
	int i, j; // Counters
	int *p, *q, *r; //Pointers
	
	p=&A[0][0];
	q=&B[0][0];
	r=&x[0];
	
	dimension(r);
	printf("Enter the elements of the matrix\n");
	read_matrix(r, A);
	transpose_matrix(p, q, r);
	
	printf("Original Matrix is:\n\n");
	
	for(i=0;i<*r;++i)
    {
		for(j=0;j<*(r+1);++j)
        {

            printf("%d   ",A[i][j]);

            if(j==*(r+1)-1)
            {
                printf("\n\n");
            }
        }
	}
	
	printf("\nTranspose of matrix is: \n\n");

    for(i=0;i<x[1];++i)
    {
		for(j=0;j<x[0];++j)
        {

            printf("%d   ",B[i][j]);

            if(j==x[0]-1)
            {
                printf("\n\n");
            }
        }
	}
	
    return 0;
}

void dimension(int *r)
{
	printf("Enter number of rows (Max 10):");
	scanf("%d", r);
	
	printf("Enter number of columns (Max 10):");
	scanf("%d", (r+1));
}

void read_matrix(int *r, int A[10][10])
{
    int i, j;
	
	for(i=0; i<*r; ++i)
    {
		for(j=0; j<*(r+1); ++j)
        {
            printf("Enter element (%d,%d): ",i+1,j+1);
            scanf("%d", &A[i][j]);
        }
	}
}

void transpose_matrix(int *r, int *p, int *q)
{
	int i, j;
	
	for(i=0; i<*r; ++i)
	{
		for (j=0; j<*(r+1); ++j)
		{
			*(q+i+10*j) = *(p+j+10*i);
		}
	}
}
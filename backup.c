#include <stdio.h>
void dimension(int[2]);

int main(){
    int x[2]; /*Dimensions */
	int a[100][100], b[100][100], sum[100][100]; /*Arrays */
	int i, j; /*Counters */

	dimension(x);
	
    printf("\nEnter elements of 1st matrix:\n");

    for(i=0; i<x[0]; ++i)
        for(j=0; j<x[1]; ++j)
        {
            printf("Enter element (%d,%d): ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }

    printf("Enter elements of 2nd matrix:\n");
    for(i=0; i<x[0]; ++i)
	{
        for(j=0; j<x[1]; ++j)
        {
            printf("Enter element (%d,%d): ",i+1, j+1);
            scanf("%d", &b[i][j]);
        }
	}
	
    for(i=0;i<x[0];++i)
    {
		for(j=0;j<x[1];++j)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
	}
	
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
	printf("Enter number of rows (Max 100):");
	scanf("%d", &x[0]);
	
	printf("Enter number of columns (Max 100):");
	scanf("%d", &x[1]);
}
#include <stdio.h>

// program to count from 1 to n.

int main(void)
{
	int i=1;
	int n;
	char c;
	
	do{
		printf("Enter the integer n that you want to count to\n");
		scanf("%d", &n);
		
		if(n>1)
			for(i=1;i<=n;i++){
			printf("%d\n",i);
			}
		else
			printf("ERROR\n");
		
		getchar();
		printf("Do you want to run the process again?\n");
		scanf("\n%c",&c);
	}while(c == 'y');
	
	return 0;
}
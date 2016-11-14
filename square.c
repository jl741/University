#include <stdio.h>

int main(void)
{
	int n;
	for(;;){
		printf("Enter 0 to stop: ");
		scanf("%d", &n);
		if(n ==0)
			break;
		printf("The square of %d is %d\n", n, n*n);
	}
		
	return 0;

}
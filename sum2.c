#include <stdio.h>
int main()
{
	int n1, n2, Sum;
	
	printf("Enter two integers seperated by a space:");
	scanf("%d %d", &n1, &n2);
	
	Sum = n1 + n2;
	
	if(n1>n2)
		printf("Numbers in increasing order are: %d %d\n", n2, n1);
	else
		printf("Numbers in increasing order are: %d %d\n", n1, n2);
	
	printf("%d + %d = %d\n", n1, n2, Sum);
	
	if(Sum % 2 == 0) 
		printf("%d is even\n", Sum);
	else
		printf("%d is odd\n", Sum);
	
	return 0;
}
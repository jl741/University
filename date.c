#include <stdio.h>

#define MAX_LENGTH 10

int main(void)
{
	int a, b, c;
	char str[0];
	char month[12][MAX_LENGTH]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	
	printf("Enter the date (dd.mm.yyyy)\n");
	scanf("%d.%d.%d", &a, &b, &c);
	
	printf("Today is the %d%c of %s, %d\n", a, str[100], month[b], c);
	
	return 0;
}
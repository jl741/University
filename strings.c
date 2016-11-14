#include <stdio.h>
#define str_len 100

int main(void)
{
	char str[str_len+1];
	int count;
	char *s;
	
	s = &str[0];
	
	printf("Enter the sentence that you want to be stored:");
	
	fgets(str, sizeof(str), stdin);
	
	printf("%s\n", str);
		
	return 0;
}

#include <stdio.h> 

int modulo(int, int);  /* function prototype declaration */ 

int main(void) 
{ 
	int i, j, r;
	i=1239; j=67; r= modulo(i,j);
	printf("i mod j = %d\n", r);
	return 0;
}

int modulo(int x, int y) 
{ 
	return x%y; 
}
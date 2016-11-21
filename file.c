#include <stdio.h>

int main(void)
{
	char c;
	
	printf("Do you want to read (r), write (w) or append (a) a file?:");
	scanf("%c", &c);
	
	switch(c)
	{
		case 'r': //This will onlu be able to read the first line of the document.
		{
			FILE *fin;
			char fname[] = "example.txt", buff[100];
			
			if( (fin = fopen (fname, "r")) == NULL){
				printf("Error opening file %s.\n", fname);
				return 1;
			}
			
			fgets(buff, sizeof(buff), fin);
			printf("The first line of %s is:  %s\n", fname, buff);
			fclose(fin);
			break;
		}
		
		case 'w': //This will rewrite the document completely.
		{
			FILE *fin;
			char fname[] = "example.txt";
			
			if( (fin = fopen (fname, "w")) == NULL){
				printf("Error opening file %s.\n", fname);
				return 1;
			}
			
			fseek(fin, 0, SEEK_SET);
			fputs("[WHAT YOU WANT TO ADD\n", fin);
			fclose(fin);
			break;
		}
		case 'a': //This will add a pre-specified piece of text to the document.
		{
			FILE *fin;
			char fname[] = "example.txt", buff[100];
			
			if( (fin = fopen (fname, "a")) == NULL){
				printf("Error opening file %s.\n", fname);
				return 1;
			}
			printf("What do you want to add to the document?\n");
			gets(buff);
			
			fprintf(fin, "%s", buff);
			fclose(fin);
			break;
		}
	}
	return 0;
}
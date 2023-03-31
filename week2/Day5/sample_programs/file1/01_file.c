/* Display contents of a file on screen. */
# include <stdio.h>
#include <stdlib.h>

int main( )
{
	FILE *fp ;
	char ch ;
	fp = fopen("PR1.c","r");//"file1.txt"
	if(fp == NULL)
	{
		printf("Error in opening file\n");
		exit(0);
	}
	while(1)
	{
		ch = fgetc(fp);
		if(ch == EOF)
		break ;
		printf("%c", ch);
	}
	fclose(fp);
	return 0;
}

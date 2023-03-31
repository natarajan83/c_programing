#include<stdio.h>
#include<stdlib.h>

int main( )
{
	FILE *fs,*ft ;
	char ch ;
	fs = fopen("PR1.c","r");//"file1.txt"
	if(fs == NULL)
	{
		printf("Error in opening file\n");
		exit(0);
	}

	ft = fopen("pr2.c", "w") ;
	if ( ft == NULL )
	{
		puts("Cannot open target filei\n") ;
		fclose(fs);
		exit(0) ;
	}
	while(1)
	{
		ch = fgetc(fs) ;
		if(ch == EOF)
		break ;
		else
		   fputc(ch,ft) ;
	}
	fclose(fs);
	fclose(ft);
	return 0;
}

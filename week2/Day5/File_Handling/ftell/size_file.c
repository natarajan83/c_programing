#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp=NULL;
	char ch;
	char str[50];
	fp=fopen("abc.txt","r");
	if (fp==NULL)
	{
		printf("cannot open file");
		exit(1);
	}
	fseek(fp,0,SEEK_END);
	printf("%ld",ftell(fp));
	fclose(fp);
	return 0;
}

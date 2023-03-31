#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp=NULL;
	char ch;
	fp=fopen("abc.txt","w+");
	if (fp==NULL)
	{
		printf("cannot open file");
		exit(1);
	}
	fputs("I love my India",fp);
	rewind(fp);
	while(!feof(fp))
	{
		ch=fgetc(fp);
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
}

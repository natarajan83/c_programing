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
		printf("Error");
		exit(1);
	}
	while(!feof(fp))
	{
		ch=fgetc(fp);
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
}

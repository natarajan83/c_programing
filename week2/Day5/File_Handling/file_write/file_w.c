#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp=NULL;
	char str[50]="CHAMAN KUMAR";
	fp=fopen("abc.txt","w");
	if(fp==NULL)
	{
		printf("Error");
		exit(1);
	}
	fputs(str,fp);
	fclose(fp);
	return 0;
}

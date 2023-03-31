#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp1=NULL,*fp2=NULL;
	char ch;
	fp1=fopen("abc.txt","r");
	if(fp1==NULL)
	{
		printf("cannot open file");
		exit(1);
	}
	fp2=fopen("dest.txt","w");
	if(fp2==NULL)
	{
		printf("error");
		exit(1);
	}
	while((ch=fgetc(fp1))!=EOF)
	{
		fputc(ch,fp2);
	}
	printf("sucessfully copied\n");
	fclose(fp1);
	fclose(fp2);
	return 0;
}
	

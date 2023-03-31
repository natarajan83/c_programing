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
	printf("%ld",ftell(fp));
	fseek(fp,8,SEEK_SET);
	printf("%ld",ftell(fp));
	ch=fgetc(fp);
	printf("%c",ch);
	printf("%ld",ftell(fp));
	fscanf(fp,"%s",str);
	printf("%s",str);
	printf("%ld",ftell(fp));
	fclose(fp);
	return 0;
}

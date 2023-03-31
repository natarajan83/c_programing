#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp=NULL;
	char ch;
	fp=fopen("abc.txt","r+");
	if (fp==NULL)
	{
		printf("cannot open file");
		exit(1);
	}
	fseek(fp,8,SEEK_SET);
	while(!feof(fp))
	{
		ch=fgetc(fp);
		printf("%c",ch);
	}
	rewind(fp);
	while(!feof(fp))
        {
                ch=fgetc(fp);
                printf("%c",ch);
        }
	fclose(fp);
	return 0;
}

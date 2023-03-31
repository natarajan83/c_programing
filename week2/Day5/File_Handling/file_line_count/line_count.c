#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp=NULL;
	char ch;
	int i=0;
	int count=0;
	fp=fopen("abc.txt","r");
	if (fp==NULL)
	{
		printf("cannot open file");
		exit(1);
	}
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch=='\n')
		{
			count++;
		}
		if(ch!=EOF)
		{
			i++;
		}
	}
	fclose(fp);
	printf("Num of lines are:%d\n",count);
	printf("Num of char present are:%d\n",i);
	return 0;
}

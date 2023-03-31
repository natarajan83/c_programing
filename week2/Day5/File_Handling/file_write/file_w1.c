#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
        FILE *fp=NULL;
	int a=10;
        char str[50];
        fp=fopen("write.txt","w");
        if(fp==NULL)
        {
                printf("Error");
                exit(1);
        }
	printf("Enter a string to write in file: ");
	gets(str);
	//fputs(str,fp);
	fprintf(fp,"%d %s ", a,str);
       /* for(int i=0;i!=strlen(str);i++)
	{
		fputc(str[i],fp);
	}*/
	
        fclose(fp);
        return 0;
}

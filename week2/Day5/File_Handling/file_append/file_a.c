#include<stdio.h>
#include<stdlib.h>

int main()
{
        FILE *fp=NULL;
        char str[50];
        fp=fopen("abc.txt","a");
        if (fp==NULL)
        {
                printf("Error");
                exit(1);
        }
	printf("Enter the content you want to append:");
	gets(str);
	fprintf(fp,"\n%s",str);
	//fputs(str,fp);
	printf("Sucessfully appended");
        fclose(fp);
        return 0;
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
        FILE *fp=NULL;
        char str[50]="I love my India";
        fp=fopen("abc.txt","r+");
        if (fp==NULL)
        {
                printf("Error");
                exit(1);
        }
	fputc('Z',fp);
//	printf("Enter string to write:");
	fputs(str,fp);
       // fgets(str,10,fp);
//	printf("%s",str);
        fclose(fp);
        return 0;
}


#include<stdio.h>
#include<stdlib.h>

int main()
{
        FILE *fp=NULL;
        char str[50];
        fp=fopen("abc.txt","r");
        if (fp==NULL)
        {
                printf("Error");
                exit(1);
        }
        while(!feof(fp))
        {
                fgets(str,9,fp);
                printf("%s",str);
        }
        fclose(fp);
        return 0;
}


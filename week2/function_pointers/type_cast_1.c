#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0x1a2b3c4d;
    int i;

    for(i=0;i<4;i++)
    {
        //printf("Byte number (%d): %llu \n",i+1,(unsigned long long)((char*)&n+i));
        printf("Byte number (%d): %llu \n",i+1,(unsigned long long)(&n+i));
        printf("Byte number (%d): %hhx \n",i+1,(unsigned long long)n);
       // printf("Byte number (%d): %p \n",i+1,(unsigned long long)(&n+i));
        //printf("Byte number (%d): %p \n",i+1,(unsigned long long)n);
    }

    for(i=0;i<4;i++)
    {
        printf("Content of byte number (%d): %hhx \n",i+1,*(unsigned char*)((char*)&n+i));
        //printf("Content of byte number (%d): %hhx \n",i+1,*((char*)&n+i));
    }
}

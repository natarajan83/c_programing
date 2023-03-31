#include<stdio.h>
int sum ( int,int);
int main ()
{
   int a,b,c;
   printf("enter 2 numbers: ");
   scanf("%d%d", &a,&b);
   c= sum (a,b);
   printf ("sum=%d\n", c);
   return 0;
}

int sum ( int a, int b )
{
   int c;
   c= a+b;
   return c;
}

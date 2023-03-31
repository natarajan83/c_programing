#include<stdio.h>

void sum(void);

int main ()
{
   sum ();
   return 0;
}
void sum ()
{
   int a,b,c;
   printf("enter 2 numbers:\n");
   scanf ("%d%d", &a, &b);
   c = a+b;
   printf("sum = %d\n",c);
}

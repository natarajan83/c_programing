#include <stdio.h>
#include"extern.h"
extern int x;
int b = 8;
int main()
{
   auto int a = 28;
   x = 32;
   extern int b;
   printf("The value of auto variable : %d\n", a);
   printf("The value of extern variables x and b : %d,%d\n",x,b);
   x = 15;
   printf("The value of modified extern variable x : %d\n",x);
   return 0;
}

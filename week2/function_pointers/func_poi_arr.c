#include <stdio.h>
#include <stdlib.h>


int (*my_function(int,int))[5];

//my_function is function is a function which accepts two integers and returns a pointer to array of integers

int (*(*pfn)(int,int))[5];

//pfn is a pointer to function which accepts two integers and returns a pointer to array 5 of int

int main(void)
{
  pfn= my_function;

  int (*pA)[5];
  int i;
  int m;

  pA= pfn(12,4);

  for(i=0;i<5;i++)
  {
      m=(*pA)[i];

      printf("m= %d\n",m);
  }

  return 0;

}

int (*my_function(int a, int b))[5]
{
    static int A[5];

    A[0]= a+b;
    A[1]= a-b;
    A[2]= a*b;
    A[3]= a/b;
    A[4]= a%b;

    return(&A);

}
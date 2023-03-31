#include<stdio.h>


struct a
{
	int a;
	int b;
}var;


int main()
{

       struct  a var  =
       {
	      .b = 20,
	      .a = 10,
       };
       struct a var1 = {10,20};

	printf("%d \n",var.a);
	printf("%d \n",var.b);



	return 0;
}

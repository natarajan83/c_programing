#include <stdio.h>
void func(void);
int main() 
{
   func();
   func();
   func();
   return 0;
}

void func(void)
{
	int num1=1;
	static int num2=1;
	num1++;
	num2++;
	printf("num1 is : %d \n static num2 is : %d\n",num1,num2);
}

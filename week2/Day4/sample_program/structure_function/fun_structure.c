#include<stdio.h>

struct example
{
	int a;
	char b;

};
struct example var1;
struct example* fun1();

int main()
{

	struct example *ret ;
       ret = fun1();

	
	printf("%d\n",(*ret).a);
	printf("%c\n",(*ret).b);

	printf("%d\n",ret->a);
	printf("%c\n",ret->b);

	return 0;
}

struct example *fun1()
{
	var1.a = 10;
	var1.b = 'A';
	return &var1;
}

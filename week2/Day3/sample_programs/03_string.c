#include<stdio.h>

int main()
{
	char a;

	while((a= getchar() != 10))
		printf("%c",a);
	return 0;
}

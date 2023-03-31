#include<stdio.h>

int main()
{
	unsigned char number = 8;

	if((number > 0) && (number & (number-1)) == 0)
		printf("The number %d is power of 2\n",number);
	else
		printf("The number %d is not power of 2\n",number);
	return 0;
}

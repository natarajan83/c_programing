//program using format specifier with int
#include<stdio.h>
int main()
{
	int n=123456;
	printf("%d\n",n);
	printf("%10d\n",n); //field width of 10
	printf("%010d\n",n); //padded with zeroes
	printf("%-10d\n",n); //left aligned
	return 0;
}

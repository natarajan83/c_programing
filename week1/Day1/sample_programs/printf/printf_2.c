//program using format specifier with char
#include<stdio.h>
int main()
{
	char ch='A';
	printf("As Character value: %c\n",ch);
	printf("As Integer (base 10) value: %d\n",ch);
	printf("As Octal value: %o\n",ch);
	printf("As Hex value: %x\n",ch);
	printf("Address of ch: %p\n",&ch); /*may change from one 
					     time to the other*/
	return 0;
}

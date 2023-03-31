#include<stdio.h>

int string_len(char *);

int main()
{
	int len;
	len = string_len("Welcome");
	printf("The length of the string is : %d\n",len);
	return 0;
}


int string_len(char string[])
{
	int len;

	for(len=0 ; string[len] != '\0';len++)
	{}

	return len;
}

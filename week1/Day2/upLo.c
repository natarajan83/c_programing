#include<stdio.h>

int main()
{
	char letter = 'A';
	
	printf("The Upper case of %c is : %c\n",letter,letter & '_');
	printf("The Lower case of %c is : %c\n",letter,letter | ' ');

	return 0;
}

/*Program showing how to take a string with spaces using scanf()*/
#include<stdio.h>
int main()
{
	char name[50];
	printf("Enter you name: ");
	scanf("%[^\n]s",name); /* \n character after ^ indicates that 
			       the scanf() should read the input till \n.
			       Some other character can also be given 
			       in place of \n */
	printf("You are done Mr. %s\n",name);
	return 0;
}

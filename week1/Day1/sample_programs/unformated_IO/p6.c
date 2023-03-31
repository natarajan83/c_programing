/*Program reads a string containing integers and then converts it
into an integer value using atoi() function*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char buffer[100];
	int i=0;
	while((buffer[i++]=getchar())!='\n');
	buffer[--i]='\0';
	int n=atoi(buffer); // strtol() can also be used
	printf("%d\n",++n);
	return 0;
}

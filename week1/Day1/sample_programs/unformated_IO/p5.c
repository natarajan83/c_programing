/*Program shows a way of reading a string in some variable by
storing it in an array for later use*/
#include<stdio.h>
int main()
{
	char buffer[100];
	int i=0;
	while((buffer[i++]=getchar())!='\n');
	buffer[--i]='\0'; /*for replacing \n stored at this position*/
	printf("%s",buffer);
	return 0;
}

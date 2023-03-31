
#include<stdio.h>
int main()
{
	int ch1,ch2;
	ch1=getchar();
	ch2=getchar();
	putchar(ch1);
	putchar(ch2);
	return 0;
}

#if 0
#include<stdio.h>
int main()
{
	int ch1,ch2;
	ch1=getchar();
	getchar(); //for reading \n character present in the buffer
	ch2=getchar();
	putchar(ch1);
	putchar(ch2);
	return 0;
}
#end

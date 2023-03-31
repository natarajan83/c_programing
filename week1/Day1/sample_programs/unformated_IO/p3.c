/*Program reads a complete line from stdin and then displays it,
i.e. it reads until it encounters a \n character at which it stops
and displays the characters*/
#include<stdio.h>
int main()
{
	int ch;
	while((ch=getchar())!='\n')
		putchar(ch);
	return 0;
}

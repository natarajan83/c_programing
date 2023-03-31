/*Program reads until it encounters an EOF character(i.e. ctrl+D )
, it actually reads until the user presses ENTER key, after that it
displays the characters typed and then waits again for the next
character(s) */
#include<stdio.h>
int main()
{
	int ch;
	while((ch=getchar())!=EOF)
		putchar(ch);
	return 0;
}

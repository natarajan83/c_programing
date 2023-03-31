// C implementation to see how perror() and strerror()
// functions are used to print the error messages.
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main ()
{
	FILE *fp;

	// If a file is opened which does not exist,
	// then it will be an error and corresponding
	// errno value will be set
	fp = fopen(" phytec.txt ", "r");

	// opening a file which does
	// not exist.
	printf("Value of errno: %d\n ", errno);
	printf("The error message is : %s\n",strerror(13));
	perror("msg");

	return 0;
}


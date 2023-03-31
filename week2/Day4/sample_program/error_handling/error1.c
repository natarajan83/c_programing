
#include <stdio.h>
#include <errno.h>

int main()
{
	// If a file is opened which does not exist,
	// then it will be an error and corresponding
	// errno value will be set
	FILE * fp;

	// opening a file which does
	// not exist.
	fp = fopen("name.txt", "r");

	printf(" Value of errno: %d\n ", errno);

	return 0;
}


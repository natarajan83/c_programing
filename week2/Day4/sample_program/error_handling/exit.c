// use of EXIT_SUCCESS and EXIT_FAILURE.
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
	FILE * fp;
	fp = fopen ("phytec.txt", "rb");

	if (fp == NULL)
	{
		printf("Value of errno: %d\n", errno);
		printf("Error opening the file: %s\n",strerror(errno));
		perror("Error printed by perror");

		exit(EXIT_FAILURE);
		printf("I will not be printed\n");
	}

	else
	{
		fclose (fp);
		exit(EXIT_SUCCESS);
		printf("I will not be printed\n");
	}
//	while(1);
	return 0;
}


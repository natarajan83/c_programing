#include<stdio.h>
#include <stdlib.h>

void function(int);
FILE * fp;
int main()
{
	int x = 0;
	function(x);
	return 0;
}

void function(int x)
{
	float fx;
        fp = fopen("test.txt","w");
	if (x==0)
	{
		printf("Division by Zero is not allowed\n");
		fprintf(stderr, "Division by zero! Exiting...\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		fx = 10 / x;
		printf("f(x) is: %.5f", fx);
	}
	pclose(fp);
}


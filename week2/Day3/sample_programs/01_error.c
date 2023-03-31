#include<stdio.h>

int main()
{
	//const char name[10]="phytec";
	char name[10]="phytec";
//	char name[10];
//	name = "phytec";
	
	name[2] = 'z';

	printf("%s\n",name);
	return 0;
}

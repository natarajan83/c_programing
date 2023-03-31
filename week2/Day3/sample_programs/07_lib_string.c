#include<stdio.h>
#include<string.h>

int main()
{
	char name[30] = "Phytec Embedded";
	char name1[30];
	char * ptr;
	ptr = strcpy(name1,name);
	printf("name is %s\n",name);
	printf("name1 is %s\n",name1);

	return 0;
}

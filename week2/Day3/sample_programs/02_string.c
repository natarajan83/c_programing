#include<stdio.h>

int main()
{
	char name[20] = "Phytec Embedded";
	
	for(int i=0;name[i] != '\0';i++)
	{
		printf("%c",name[i]);
	}
	printf("\n");
	printf("%s\n",name);
	return 0;
}

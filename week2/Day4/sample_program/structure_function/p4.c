#include<stdio.h>
#include<string.h>


struct Point
{
	int x, y;
	char name[20];
};

int main()
{
	// Create an array of structures
	struct Point arr[10];

	// Access array members
	arr[0].x = 10;
	arr[0].y = 20;
	//arr[0].name = "abc";
	memcpy(arr[0].name,    "Paulo", 6);

	printf("%d %d %s\n", arr[0].x, arr[0].y,arr[0].name);
	return 0;
}


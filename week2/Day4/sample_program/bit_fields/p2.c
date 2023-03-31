#include <stdio.h>

// Space optimized representation of the date
struct date {

	unsigned int d : 5;

	unsigned int m : 4;

	int y;
};

int main()
{
	printf("Size of date is %lu bytes\n",sizeof(struct date));
	struct date dt = { 31, 12, 2014 };
	printf("Date is %d/%d/%d\n", dt.d, dt.m, dt.y);
	return 0;
}


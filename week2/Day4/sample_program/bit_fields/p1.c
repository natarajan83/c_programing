#include <stdio.h>
// A simple representation of the date
struct date {
	unsigned int d;
	unsigned int m;
	unsigned int y;
};

int main()
{
	printf("Size of date is %lu bytes\n",sizeof(struct date));
	struct date dt = { 9,9,2022 };
	printf("Date is %d/%d/%d\n", dt.d, dt.m, dt.y);
}


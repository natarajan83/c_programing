#include<stdio.h>

struct Point
{
	int x, y;
};

int main()
{
	struct Point p1 = {1, 2};

	// p2 is a pointer to structure p1
	struct Point *p2 = &p1;

	// Accessing structure members using structure pointer
	printf("%d %d\n", p2->x, p2->y);
	printf("%d %d\np1",(*p2).x,(*p2).y);
	printf(" %p\n",p2);
	return 0;
}

struct __attribute__((__packed__)) foo {
    char *p;  /* 8 bytes */
    char c;   /* 1 byte  */
    long x;   /* 8 bytes */
};

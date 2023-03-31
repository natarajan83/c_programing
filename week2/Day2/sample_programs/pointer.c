#include<stdio.h>

int main()
{
    int i = 5;
    int *p, *q, *r;
    p = &i;
    q = &i;
    r = p;
    printf("value of i : %d\nvalue of *p : %d\nvalue of *q : %d\nvalue of *r is : %d\n",i,*p,*q,*r);
    return 0;
}

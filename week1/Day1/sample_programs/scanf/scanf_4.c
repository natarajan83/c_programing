//Program for showing an aspect of input buffer
#include<stdio.h>
int main()
{
	int os,sp;
	printf("Enter marks in OS and SP: ");
	scanf("%d %d",&os,&sp);
	int dld;
	printf("Enter marks in DLD: ");
	scanf("%d",&dld);
	printf("Your marks is OS %d,in SP %d and in DLD are %d\n",os,sp,dld);
	return 0;
}

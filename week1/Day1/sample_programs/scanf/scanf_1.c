//Program showing use of scanf()
#include<stdio.h>
int main()
{
	char name[50];
	printf("Enter your name: ");
	scanf("%s",name);
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	double cgpa;
	printf("Enter your CGPA: ");
	scanf("%lf",&cgpa);
	printf("Mr. %s, you are %d years old and your CGPA is %4.2lf.Good Luck!\n",name,age,cgpa);
	return 0;
}


//another program showing use of scanf()
#include<stdio.h>
int main()
{
	char name[50];
	int age;
	double cgpa;
	printf("Enter name, age and CGPA: ");
	scanf("%s %d %lf",name,&age,&cgpa); /*format specifiers
					      to be space separated*/
	printf("Mr. %s, you are %d years old and your CGPA is %4.2lf. Good Luck!\n",name,age,cgpa);
	return 0;
}

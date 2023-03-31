//Program for showing use of buffer by integer
#define val 0  //to run the #else code i.e second code define value to 0
#if val
#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	char name[50];
	printf("Enter name: ");
	scanf("%[^\n]s",name);
	printf("Mr. %s! your age is %d\n",name,age);
	return 0;
}

#else
//Program for showing buffer in integer
#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	char ch;
	scanf("%c",&ch); //will read \n character in buffer
	char name[50];
	printf("Enter name: ");
	scanf("%[^\n]s",name);
	printf("Mr. %s! your age is %d\n",name,age);
	return 0;
}
#endif

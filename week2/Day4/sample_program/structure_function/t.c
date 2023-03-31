#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
typedef struct
{
    char *name;
    int age;
}student;
*/

struct
{
 int age;
}student;

int main()
{

	//struct student;
	student.age =10;
	printf("%d\n",student.age);



// function prototype
//struct student getInformation();
#if 0
int main()
{
    struct student s;
    char *st;
    char str[10]="natarajan";

    st = "natar";
    //str = "nata";
    s.name = "Natarajan";
    memcpy(s.name,"Natarajan",10);
    printf("Name: %s", s.name);
#endif
    return 0;
}

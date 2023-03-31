//program using format specifier with string
#include<stdio.h>
int main()
{
	printf("Hello World!\n");
	char name[40]="Phytec Embedded Limitted";
	printf("%s\n",name);
	printf("%30s\n",name); //30=>field width=30
	printf("%-30s\n",name); // - =>left align the string
	printf("%.8s\n",name); //.8=>print 8 characters from string
	printf("%30.8s\n",name);/*30.8=>field width=30 and print 8 characters*/
	//printf("%-30.8s\n",name); // - =>left align the string
	return 0;
}

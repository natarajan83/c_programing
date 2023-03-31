//program using format specifier with double
#include<stdio.h>
int main()
{
	double d=987.123456;
	printf("%lf\n",d);
	printf("%15lf\n",d); //field width=15
	printf("%.3lf\n",d); //print only 3 decimal places
	printf("%15.3lf\n",d); //field width=15 and decimal places=3
	printf("%-15.3lf\n\n\n",d); //right aligned
	printf("%e\n",d); //print in exponential form
	printf("%15e\n",d);
	printf("%.3e\n",d);
	printf("%15.3e\n",d);
	printf("%-15.3e\n",d);
	return 0;
}

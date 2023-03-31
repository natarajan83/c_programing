#include <stdio.h>
#include <stdarg.h>

#define NUMBER_TO_BE_FOUND 	70
#define NUM_OF_ELEMENTS 	10

// function prototypes
void FindNumber(int, int, ...);

int main(void)
{
	// code
	printf("\n\n");
	FindNumber(NUMBER_TO_BE_FOUND, NUM_OF_ELEMENTS, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100);
	return(0);
}

void FindNumber(int num_to_be_found, int num, ...) // VARIADIC FUNCTION
{
	// variable declarations
	int count = 0;
	int arg_no=0;
	int n;
	va_list numbers_list;

	// code
	va_start(numbers_list, num);

	while(num)
	{
		arg_no++;
		n = va_arg(numbers_list, int);
		printf("Argument no: %d Argument value: %d \n",arg_no,n);
		if(n == num_to_be_found)
		{	
			count++;
			printf("Argument value: %d Argument matched \n",n);
		}
		num--;
	}
	
	if(count == 0)
	{
		printf("\n Number %d not found \n", num_to_be_found);
	}
	else
	{
		printf("Number %d found %d times \n", num_to_be_found, count);
	}
	va_end(numbers_list);
}
#include <stdio.h>
#include <stdarg.h>


#define NUMBER_TO_BE_FOUND 		55
#define NUM_OF_ELEMENTS 		10

// function prototypes
void FindNumber(int, int, ...);

// function prototypes
int va_FindNumber(int, int, va_list);


int main(void)
{
	// code
	printf("\n\n");
	printf("No of Argument is :%d\n", NUM_OF_ELEMENTS);
	FindNumber(NUMBER_TO_BE_FOUND, NUM_OF_ELEMENTS, 11, 55, 33, 44, 55, 55, 77, 88, 55, 110);
	return(0);
}
void FindNumber(int num_to_be_found, int num, ...) // VARIADIC FUNCTION
{
	// variable declarations
	int count = 0;
	int n;
	va_list numbers_list;

	// code
	va_start(numbers_list, num);
	count = va_FindNumber(num_to_be_found, num, numbers_list);
	if(count == 0)
	{
		printf("Number %d not found \n", num_to_be_found);
	}
	else
	{
		printf("\n\nNumber %d found %d times \n", num_to_be_found, count);
	}

	va_end(numbers_list);
}


int va_FindNumber(int num_to_be_found, int num, va_list list)
{
	// variable declarations
	int count_of_num = 0,arg_no=0;
	int n;

	// code

	while(num)
	{
		arg_no=arg_no+1;
		n = va_arg(list, int);
		
		printf("Argument no: %d Argument val: %d \n",arg_no,n);
		if(n == num_to_be_found)
		{
			count_of_num++;
			printf("Argument matched : %d\n",n );
		}
		num--;
	}
	return(count_of_num);
}
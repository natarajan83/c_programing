#include <stdio.h>
#include <stdarg.h>


int main(void)
{
	// function prototypes
	int CalculateSum(int, ...);

	//variable declarations
	int result;

	// code
	result=0;
	printf("\n\n");
	result = CalculateSum(6,10,20,30,40,50,60);
	printf("result sum parameter is CalculateSum(10,20,30,40,50,60) = %d\n\n", result);
	result = CalculateSum(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
	printf("result sum parameter is CalculateSum(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10)= %d\n\n", result);
	result = CalculateSum(1,100);
	printf("result sum CalculateSum(100) = %d\n\n", result);

	return(0);
}

int CalculateSum(int num, ...) //VARIADIC FUNCTION
{
	// variable declarations
	int sum_total = 0;
	int n;
	va_list numbers_list;

	// code
	va_start(numbers_list, num);

	printf("in CalculateSum function %d\n",num);

	while(num)
	{
		n = va_arg(numbers_list, int);
		sum_total = sum_total + n;
		printf("in while CalculateSum function n=%d  sum_total = sum_total + n = %d\n",n,sum_total);
		num--;
	}
	va_end(numbers_list);

	return(sum_total);
}
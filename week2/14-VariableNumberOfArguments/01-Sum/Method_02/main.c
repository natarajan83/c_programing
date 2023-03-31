#include <stdio.h>
#include <stdarg.h>


// function prototypes
int CalculateSum(int, ...);


int main(void)
{
	// variable declarations
	int result_sum;

	// code
	printf("\n\n");
	result_sum = CalculateSum(5, 10, 20, 30, 40, 50);
	printf("result_sum = %d\n\n", result_sum);
	result_sum = CalculateSum(10, 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000);
	printf("result_sum = %d\n\n", result_sum);
	result_sum = CalculateSum(0);
	printf("result_sum = %d\n\n", result_sum);
	return(0);
}


int CalculateSum(int num, ...) // VARIADIC FUNCTION
{
	// function prototype
	int va_CalculateSum(int, va_list);

	// variable declarations
	int sum = 0;
	va_list numbers_list;

	// code
	va_start(numbers_list, num);
	sum = va_CalculateSum(num, numbers_list);
	va_end(numbers_list);
	return(sum);
}


int va_CalculateSum(int num, va_list list)
{

	// variable declaration
	int n,cnt=0;
	int sum_total = 0;

	// code
	while(num)
	{
		n = va_arg(list, int);
		sum_total = sum_total + n;
		cnt++;
		printf("argument no.: = %d argument val =%d sum= %d\n",cnt,n,sum_total);
		num--;
	}
	return(sum_total);
}


#include <stdio.h>
int main()
{
  int a = 99, result;
  result = a;
  printf("Welcome to IoT Internship\n");
  printf("Value of result = %d\n", result);
  result += a;  // or result = result + a
  printf("Value of result = %d\n", result); // After Addition
  result -= a;  // or result = result - a   
  printf("Value of result = %d\n", result); // After Subtraction
  result *= a;  // or result = result * a   
  printf("Value of result = %d\n", result); // After Multiplication
  result /= a;  // or result = result / a
  printf("Value of result = %d\n", result);
  return 0;
}

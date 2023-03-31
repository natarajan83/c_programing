#include<stdio.h>
int main()
{
  int a = 10,b = 15, result;
  result = a+b;
  printf("Welcome to IOT Internship \n");  
  printf("Addition: a+b = %d \n",result);
  result = a-b;
  printf("Subtraction: a-b = %d \n",result);
  result = a*b;
  printf("Multiplication: a*b = %d \n",result);
  result = a/b;
  printf("Division: a/b = %d \n",result);
  result = a%b;
  printf("Modulo Division: %d \n",result);
  result = ++a;
  printf("Increment the value of a by 1: %d \n",result);
  result = --b;
  printf("Decremented the value of b by 1: %d \n",result);
  return 0;
}

#include <stdio.h>
int main()
{
  int i = 5, j = 5, k = 10, final;

  printf("i is equal to j or k greater than j is  %d \n", (i == j) && (k > j));

  printf("i is equal to j or k less than j is %d \n", (i == j) || (k < j));

  printf("i not equal to j or k less than j is %d \n", (i != j) || (k < j));

  return 0;
}

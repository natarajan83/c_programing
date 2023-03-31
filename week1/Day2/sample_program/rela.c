#include <stdio.h>
int main()
{
  int j = 6, t = 4;

  printf("%d == %d is %d \n", j, t, j == t);
  printf("%d > %d is %d \n", j, t, j > t);
  printf("%d < %d is %d \n", j, t, j < t);
  printf("%d != %d is %d \n", j, t, j != t);
  printf("%d >= %d is %d \n", j, t, j >= t);
  printf("%d <= %d is %d \n", j, t, j <= t);

  return 0;
}

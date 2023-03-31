#include <stdio.h>
#include <string.h>

void reverseString(char *);

int main()
{
  char str[512];
  scanf("%s", str);
  reverseString(str);
  printf("\nString After Reverse: %s\n", str);
  return 0;
}
void reverseString(char str[])
{
  int n = strlen(str);


  for (int i = 0; i < n / 2; i++)
  {
    char ch = str[i];
    str[i] = str[n - i - 1];
    str[n - i - 1] = ch;
  }
}

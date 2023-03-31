#include <stdio.h>

int main() 
{
	int num = 31;
        if (num % 2 == 0)
		// jump to even
                goto even; 
        else
                // jump to odd
                goto odd; 
  
even:
	printf("%d is even\n", num);
        return 0; 
odd:
        printf("%d is odd\n", num);
        return 0;
}

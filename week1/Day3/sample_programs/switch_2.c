#include <stdio.h>

int main()
{
	char x = 'A';//test by asigning 65
        switch (x) 
        {
		case 'A':
			printf("Choice is A\n");
                        break;
                case 'B':
                        printf("Choice is B\n");
                        break;
                case 'C':
                        printf("Choice is C\n");
                        break;
                default:
                        printf("Choice other than A, B and C\n");
                        break;
        }
        return 0;
}

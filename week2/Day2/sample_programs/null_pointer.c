#include <stdio.h>

int main()
{
//	int *ptr = NULL;
       	int *ptr;
        printf("The value of ptr is : %p\n", &ptr);
        printf("The value of ptr is : %d\n", *ptr);//gives segmentation fault core dumped for int *ptr = NULL
        return 0;
}

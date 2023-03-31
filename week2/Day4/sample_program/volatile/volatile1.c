#include <stdio.h>
int main (void)                 // main class declaration in the code
{
const volatile int local_value = 25 ; // declaring constant volatile integer variable with assigned value
int *ptr = ( int* ) &local_value ;
printf ( " The initial value of the local_value is  : %d \n ", local_value ) ;
*ptr = 195 ;  // value to the pointer
printf ( " The modified value of the local_value is: %d \n ", local_value ) ;
return 0 ;
}

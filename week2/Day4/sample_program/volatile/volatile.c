/* Compile code with optimization option */
#include <stdio.h>
 
int main(void)
{
     volatile  const int local = 10;
     int *ptr = (int*) &local;
 
    printf("Initial value of local : %d \n", local);
 
    *ptr = 100;
 
    printf("Modified value of local: %d \n", local);
 
    return 0;
}


/*Output: 

  [narendra@ubuntu]$ gcc -O3 volatile.c -o volatile –save-temps
  [narendra@ubuntu]$ ./volatile
  Initial value of local : 10
  Modified value of local: 10
  [narendra@ubuntu]$ ls -l volatile.s
  -rw-r–r– 1 narendra narendra 626 2016-11-19 16:21 volatile.s
Let us declare const object as volatile and compile code with optimization option. Although we compile code with optimization option, value of const object will change, because variable is declared as volatile that means don’t do any optimization. 
*/

/* 
#include <stdio.h>
 
int main(void)
{
    const volatile int local = 10;
    int *ptr = (int*) &local;
 
    printf("Initial value of local : %d \n", local);
 
    *ptr = 100;
 
    printf("Modified value of local: %d \n", local);
 
    return 0;
}

Output: 

  [narendra@ubuntu]$ gcc -O3 volatile.c -o volatile –save-temp
  [narendra@ubuntu]$ ./volatile
  Initial value of local : 10
  Modified value of local: 100
  [narendra@ubuntu]$ ls -l volatile.s
  -rw-r–r– 1 narendra narendra 711 2016-11-19 16:22 volatile.s
  [narendra@ubuntu]$
The above example may not be a good practical example, the purpose was to explain how compilers interpret volatile keyword. As a practical example, think of touch sensor on mobile phones. The driver abstracting touch sensor will read the location of touch and send it to higher level applications. The driver itself should not modify (const-ness) the read location, and make sure it reads the touch input every time fresh (volatile-ness). Such driver must read the touch sensor input in const volatile manner.

Note: The above codes are compiler specific and may not work on all compilers. The purpose of the examples is to make readers understand the concept.*/

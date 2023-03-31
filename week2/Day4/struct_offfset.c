#include<stdio.h>
#include<string.h>
struct s {
           int i;
           char c;
	   char z;
           char t[4];
           double d;
        //   char a[];
	   struct s *link;
	   char f;
      	};
int main( )
{
        struct s new;
        printf("%p\n", (void*)(&((struct s *)NULL)->i));
        printf("%p\n", (void*)(&((struct s *)NULL)->c));
        printf("%p\n", (void*)(&((struct s *)NULL)->t));
        printf("%p\n", (void*)(&((struct s *)NULL)->d));
        printf("%p\n", (void*)(&((struct s *)NULL)->link));
        printf("%p\n", (void*)(&((struct s *)NULL)->f));

        printf("%p\n",&(new.i));
        printf("%p\n", &new);
        printf("%p\n", &(new.d));
        return 0;
}


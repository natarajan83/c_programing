#include<stdio.h>
enum week{Mon=10, Tue=13, Wed, Thur=20, Fri, Sat, Sun};
int main()
{
    enum week day;
    day = Fri;
    printf("%d\n",day);
    return 0;
}
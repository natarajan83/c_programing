#include <stdio.h>
#include <stdlib.h>

int phy_add(int,int);
int phy_sub(int,int);
int phy_mul(int,int);
int phy_div(int,int);
int phy_mod(int,int);


int main(void)
{
    int (*arr[5])(int,int);

    int a=100,b=5;

    int i;
    int ret;

    arr[0]=phy_add;
    arr[1]=phy_sub;
    arr[2]=phy_mul;
    arr[3]=phy_div;
    arr[4]=phy_mod;

    for(i=0;i<5;i++)
    {
        ret = arr[i](a,b);
        printf("ret =%d \n",ret);

    }
    return 0;

}

int phy_add(int a,int b)
{
    return(a+b);
}

int phy_sub(int a,int b)
{
    return(a-b);
}

int phy_mul(int a,int b)
{
    return(a*b);
}

int phy_div(int a,int b)
{
    return(a/b);
}

int phy_mod(int a,int b)
{
    return(a%b);
}








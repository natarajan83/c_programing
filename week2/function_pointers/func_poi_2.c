#include<stdio.h>
#include<stdlib.h>

int phy_add(int,int);
int phy_sub(int,int);
int phy_mul(int,int);
int phy_div(int,int);
int phy_mod(int,int);

int alu_operation(int (*pfn)(int,int),int arg1,int arg2)
{
    return pfn(arg1,arg2);
}


int main(void)
{
    int choice;

    int (*pfn_A[5])(int,int)= {phy_add,phy_sub,phy_mul,phy_div,phy_mod};

    printf("Select ALU OP:1->add, 2->sub 3->mul 4->div 5->mod :");
    scanf("%d",&choice);

    if(choice <1 || choice >5)
    {
        puts("bad choice");
        exit(-1);
    }

    printf("ret= %d\n",alu_operation(pfn_A[choice-1],100,5));
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

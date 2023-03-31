#include<stdio.h>

int  main ()
{   
	int a,b,c,d;
        printf("Enter the values of a,b,c,d: ");  
        
	scanf("%d%d%d%d",&a,&b,&c,&d);    

        if(a>b && a>c && a>d)
        {       
        	printf("%d is the largest\n",a);    

        }else if(b>c && b>a && b>d)
        {       
                printf("%d is the largest\n",b);    
        }else if(c>d && c>a && c>b)
        {      
                printf("%d is the largest\n",c);    
        }else
        {       
                printf("%d is the largest\n",d); 
        } 
        return 0;
}

#include<stdio.h>

int main()
{
	int var1,var2=10,var3=5;
	printf("Enter a number:");
	scanf("%d",&var1);
	
	//condition
	if(var1<var2)
	{
		printf("Hi the number you entered is < 10\n");
		if(var1<var3)
		{
			printf("The number is less than five \n");
		}

	}
	else if(var1 > var2)
	{
		printf("Hi the number you entered is greater than 10\n");
	}
	else
	{
		printf("Hi the number you entered is equal to 10");
	}

	return 0;
}

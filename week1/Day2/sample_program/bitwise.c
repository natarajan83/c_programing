#include <stdio.h>
int main() 
{
	int a = 50;      
	int b = 5;    
	int result = 0;   
	result = a | b;     // Binary AND Operator
	printf("Binary OR Operator of a and b is %d\n", result );      
	result = a & b;     // Binary AND Operator
	printf("Binary AND Operator of a and b is %d\n", result );
	result = a ^ b;     // Binary XOR Operator
	printf("Binary XOR Operator of a and b is %d\n", result );
	result = ~a;        // Binary Ones Complement Operator
	printf("Binary Ones Complement Operator of a is %d\n", result );
	result = a << 2;   // Binary Left Shift Operator
	printf("Binary Left Shift Operator of a is %d\n", result );
	result = a >> 2;   // Binary Right Shift Operator
	printf("Binary Right Shift Operator of a is %d\n", result );
	return 0;
}

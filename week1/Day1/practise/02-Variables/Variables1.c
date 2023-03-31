#include <stdio.h>

int main(void)
{

    // variable declarations
    int int_num = 12345;
    float float_num = 2.123456789f;
    double dou_num = 100.041997;
    char char_num = 'A';
    
	//code
    printf("\n\n");
    
    printf("integer = %d\n", int_num);
    printf("float = %f\n", float_num);
    printf("double = %lf\n", dou_num);
    printf("char = %c\n", char_num);

    printf("\n\n");

    int_num = 12343;
    float_num = 12346.123546789f;
    dou_num = 500.1294;
    char_num = 'P';
    
    printf("integer = %d\n", int_num);
    printf("float = %f\n", float_num);
    printf("double = %lf\n", dou_num);
    printf("char = %c\n", char_num);

    printf("\n\n");

    return(0);
}




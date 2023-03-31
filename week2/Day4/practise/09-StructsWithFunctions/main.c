#include <stdio.h>

// DEFINING STRUCT
struct MyData_vb
{
	int i;
	float f;
	double d;
	char c;
};


int main(void)
{
	//function prototype
	struct MyData_vb AddStructMembers(struct MyData_vb, struct MyData_vb, struct MyData_vb);

	//variable declarations
	struct MyData_vb data_in1, data_in2, data_in3, answer_data;
	//code
	//data1 
	printf("\n\n");
	printf("DATA 1 \n\n");
	printf("Enter Integer Value For 'i' Of 'struct MyData data input 1' : ");
	scanf("%d", &data_in1.i);
	
	printf("\n");
	printf("Enter Floating-Point Value For 'f' Of 'struct MyData data input 1' : ");
	scanf("%f", &data_in1.f);

	printf("\n");
	printf("Enter 'Double' Value For 'd' Of 'struct MyData data input 1' : ");
	scanf("%lf", &data_in1.d);

	printf("\n");
	printf("Enter Character Value For 'c' Of 'struct MyData data input 1' : ");
	data_in1.c = getch();
	printf("%c", data_in1.c);

	// data2 
	printf("\n\n");	
	printf("DATA 2 \n\n");
	printf("Enter Integer Value For 'i' Of 'struct MyData data input 2' : ");
	scanf("%d", &data_in2.i);
	
	printf("\n");
	printf("Enter Floating-Point Value For 'f' Of 'struct MyData data input 2' : ");
	scanf("%f", &data_in2.f);

	printf("\n");
	printf("Enter 'Double' Value For 'd' Of 'struct MyData data input 2' : ");
	scanf("%lf", &data_in2.d);

	printf("\n");
	printf("Enter Character Value For 'c' Of 'struct MyData data input 2' : ");
	data_in2.c = getch();
	printf("%c", data_in2.c);

	// data3 
	printf("\n\n");
	printf("DATA 3 \n");
	printf("Enter Integer Value For 'i' Of 'struct MyData data input 3' : ");
	scanf("%d", &data_in3.i);

	printf("\n");
	printf("Enter Floating-Point Value For 'f' Of 'struct MyData data input 3' : ");
	scanf("%f", &data_in3.f);

	printf("\n");
	printf("Enter 'Double' Value For 'd' Of 'struct MyData data input 3' : ");
	scanf("%lf", &data_in3.d);

	printf("\n");
	printf("Enter Character Value For 'c' Of 'struct MyData data3' : ");
	data_in3.c = getch();
	printf("%c", data_in3.c);

// *** CALLING FUNCTION AddStructMembers() WHICH ACCEPTS THREE VARIABLES OF
// TYPE 'struct MyData' AS PARAMETERS AND ADDS UP THE RESPECTIVE MEMBERS AND
// RETURNS THE ANSWER IN ANOTHER struct OF SAME TYPE

	answer_data = AddStructMembers(data_in1, data_in2, data_in3);

	printf("\n\n");
	printf("ANSWER\n");
	printf("answer_data.i = %d\n", answer_data.i);
	printf("answer_data.f = %f\n", answer_data.f);
	printf("answer_data.d = %lf\n", answer_data.d);
	answer_data.c = data_in1.c;
	printf("answer_data.c (from data1) = %c\n", answer_data.c);
	answer_data.c = data_in2.c;
	printf("answer_data.c (from data2) = %c\n", answer_data.c);
	answer_data.c = data_in3.c;
	printf("answer_data.c (from data3) = %c\n", answer_data.c);
	return(0);
}

struct MyData_vb AddStructMembers(struct MyData_vb md_one, struct MyData_vb md_two, struct MyData_vb md_three)
{
	//variable declarations
	struct MyData_vb answer;
	//code
	answer.i = md_one.i + md_two.i + md_three.i;
	answer.f = md_one.f + md_two.f + md_three.f;
	answer.d = md_one.d + md_two.d + md_three.d;
	return(answer);
}
#include <stdio.h>

struct Employee
{
	int employee_id;
        char name[20];
        int salary;
 };

struct Organisation
{
	char organisation_name[20];
        char org_number[20];
        struct Employee emp;
};

int main()
{
       	struct Organisation org;
        printf("%ld\n", sizeof(org));
        return 0;
}

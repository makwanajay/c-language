#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee
{
int employee_id,employee_salary;
char employee_name[20],employee_address[40],employee_email[50],employee_role[30];
}e1;
void main()
{
clrscr();
	    {
		printf("enter employee id:");
		scanf("%d",&e1.employee_id);
		printf("enter employee name:");
		scanf("%s",&e1.employee_name);
		printf("enter employee address:");
		scanf("%s",&e1.employee_address);
		printf("enter employee email:");
		scanf("%s",&e1.employee_email);
		printf("enter employee salary:");
		scanf("%d",&e1.employee_salary);
		printf("enter employee role:");
		scanf("%s",&e1.employee_role);
	    }
	    {
	    printf("%d\n",e1.employee_id);
	    printf("%s\n",e1.employee_name);
	    printf("%s\n",e1.employee_address);
	    printf("%s\n",e1.employee_email);
	    printf("%d\n",e1.employee_salary);
	    printf("%s\n",e1.employee_role);
	    }
	    printf("\n");

getch();
}
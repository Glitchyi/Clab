//Using structure read and print data of an employees  (name, employee ID and salary.)
#include<stdio.h>
void main(){
    struct employee{
        char name[100];
        int id;
        float salary;
    };
    struct employee e;
    printf("Enter the name of the employee\n");
    scanf("%s",e.name);
    printf("Enter the employee ID\n");
    scanf("%d",&e.id);
    printf("Enter the salary\n");
    scanf("%f",&e.salary);
    printf("The details of the employee are\n");
    printf("Name: %s\n",e.name);
    printf("Employee ID: %d\n",e.id);
    printf("Salary: %f\n",e.salary);
}
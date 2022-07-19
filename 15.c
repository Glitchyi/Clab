//Using structure read and print data of an employees  (name, employee ID and salary.)
#include<stdio.h>
void main(){
    struct employee{
        char name[100];
        int id;
        float salary;
    };
    int n;
    printf("Enter the number of employees\n");
    scanf("%d",&n);
    struct employee e[n];
    for(int i;i<n;i++){
    printf("Enter the name of the employee\n");
    scanf("%s",e[i].name);
    printf("Enter the employee ID\n");
    scanf("%d",&e[i].id);
    printf("Enter the salary\n");
    scanf("%f",&e[i].salary);

    }
    printf("Salary: %f\n",e.salary);
    printf("The details of the employee are\n");
    printf("Name: %s\n",e.name);
    printf("Employee ID: %d\n",e.id);

}





//Declare a union containing 5 string variables name house name, City name, state pin code. Each is a length of size C size user defined constant.Then read and display the address of a person using a variable of the Union.
#include<stdio.h>
void main(){
    union person{
        char name[100];
        char house[100];
        char city[100];
        char state[100];
        char pin[100];
    };
    union person p;
    printf("Enter the name of the person\n");
    scanf("%s",p.name);
    printf("Enter the house name\n");
    scanf("%s",p.house);
    printf("Enter the city name\n");
    scanf("%s",p.city);
    printf("Enter the state name\n");
    scanf("%s",p.state);
    printf("Enter the pin code\n");
    scanf("%s",p.pin);
    printf("The address of the person is\n");
    printf("Name: %s\n",p.name);
    printf("House name: %s\n",p.house);
    printf("City name: %s\n",p.city);
    printf("State name: %s\n",p.state);
    printf("Pin code: %s\n",p.pin);
}
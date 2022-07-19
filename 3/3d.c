//Evaluvate the arthematic expression ((a-b/c*d+e)*(f+g)) and display the result.
#include<stdio.h>
void main(){
    int a,b,c,d,e,f,g;
    printf("Enter the values of a,b,c,d,e,f,g\n");
    scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
    printf("Result of the expression is %d\n",((a-b/c*d+e)*(f+g)));
}
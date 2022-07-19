
//Find the factorial of a given natural number N using recursive function.
#include<stdio.h>
int fact(int n);
void main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("The factorial of %d is %d\n",n,fact(n));
}
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

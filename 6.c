// read a natural numbet and check if its a armstrong number or not.
#include<stdio.h>
void main(){
    int n,r,t,sum=0;
    printf("Enter a natural number\n");
    scanf("%d",&n);
    r=n;
    while(r>0){
        t=r%10;
        sum=sum+t*t*t;
        r=r/10;
    }
    if(sum==n){
        printf("%d is a armstrong number\n",n);
    }
    else{
        printf("%d is not a armstrong number\n",n);
    }
}
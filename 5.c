//	Read a Natural number and chack whether it is a prime number or not.
#include<stdio.h>
void main(){
    int n,i,flag=0;
    printf("Enter a natural number\n");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("%d is a prime number\n",n);
    }
    else{
        printf("%d is not a prime number\n",n);
    }
}

//Read 3 integers and find the largest of them.
#include<stdio.h>
void main(){
    int a,b,c,max;
    printf("Enter three integers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        max=a;
    }
    else if(b>a && b>c){
        max=b;
    }
    else{
        max=c;
    }
    printf("Largest of three integers is %d\n",max);
}
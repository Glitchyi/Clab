//Compute the largest of three numbers using pointer
#include <stdio.h>
void main(){
    int a = 10;
    int b = 20;
    int c = 30;
    int *p;
    p = &a;
    printf("%d\n", *p);
    p = &b;
    printf("%d\n", *p);
    p = &c;
    printf("%d\n", *p);
    if(a>b){
        if(a>c){
            printf("%d\n", a);
        }
        else{
            printf("%d\n", c);
        }
    }
    else{
        if(b>c){
            printf("%d\n", b);
        }
        else{
            printf("%d\n", c);
        }
    }
}
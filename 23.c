//Input and display the contents of an array using pointers.
#include<stdio.h>
void main(){
    int a[5],i;
    int *p;
    p = a;
    for(i=0;i<5;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<5;i++){
        printf("%d\n", a[i]);
    }
}
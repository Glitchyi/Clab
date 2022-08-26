//Swap 2 numbers using user-defined function using pointer
#include <stdio.h>
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void main(){
    int a,b;
    int *p1,*p2;
    p = &a;
    p = &b;
    scanf("%d%d", &a, &b);
    printf("%d\n", *p);
    swap(&a, &b);
    printf("%d\n", a);
    printf("%d\n", b);
}
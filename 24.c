//Compute the sum of all elements stored in an array using pointers.
#include <stdio.h>
void main(){
    int a[5] = {1,2,3,4,5};
    int *p;
    int i;
    int sum = 0;
    p = &a[0];
    for(i=0;i<5;i++){
        printf("%d\n", *p);
        sum = sum + *p;
        p++;
    }
    printf("%d\n", sum);
}

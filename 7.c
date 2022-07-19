// Read n numbers , store them in an array and fin theri sum and average of the array.
#include<stdio.h>
void main(){
    int a[100],i,j,n;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    float sum=0;
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    printf("Sum of all elements is %d\n",sum);
    float avg=sum/n;
    printf("Average of all elements is %f\n",avg);
}
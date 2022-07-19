//Read n integers, store them in an array and sort the elements in the array using bubble sort algorithm.
#include<stdio.h>
void main(){
    int a[100],i,j,n;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted array is\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}
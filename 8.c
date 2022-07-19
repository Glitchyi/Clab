//Read n integers store them in an array and search for an element in using leniar search algorithm.
#include<stdio.h>
void main(){
    int a[100],i,j,n,key,flag=0;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched\n");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Element found at position %d\n",i+1);
    }
    else{
        printf("Element not found\n");
    }
}
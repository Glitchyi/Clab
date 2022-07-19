//Read a string and store it in an array and check whether it's a palindrome or not.
#include<stdio.h>
void main(){
    char a[100];
    int i,j,n;
    printf("Enter the string\n");
    scanf("%s",a);
    n=strlen(a);
    for(i=0,j=n-1;i<n/2;i++,j--){
        if(a[i]!=a[j]){
            printf("%s is not a palindrome\n",a);
            break;
        }
    }
    if(i==n/2){
        printf("%s is a palindrome\n",a);
    }
}

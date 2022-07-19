//Read a string word stored in array and obtain its reward by using a user defined function.
#include<stdio.h>
void main(){
    char a[100];
    int n,i=0;
    printf("Enter the string\n");
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++){
        continue;
    }
    reward(a,i);
}
void reward(char a[],n){
    char rev[100];
    for(int i=n, j=0;i>0;i--,j++){
        rev[j]=a[i];
    }
    printf("%s\n",rev);
}
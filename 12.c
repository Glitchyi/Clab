
//Read two strings, each one ending with a dollar symbol. Store them in an array and concatenate them without library functions.
#include<stdio.h>
void main(){
    char a[100],b[100];
    int i,j,n;
    printf("Enter the first string\n");
    scanf("%s",a);
    printf("Enter the second string\n");
    scanf("%s",b);
    for(i=0;a[i]!='$';i++){
        a[i]=a[i];
    }
    for(j=0;b[j]!='$';j++){
        a[i]=b[j];
        i++;
    }
    a[i]='\0';
    printf("Concatenated string is %s\n",a);
}


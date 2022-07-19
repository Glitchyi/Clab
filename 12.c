//read a string ending with the dollar symbol store it in an array and count the number of vowels consonant and spaces in the string.
#include<stdio.h>
void main(){
    char a[100];
    int i,j,n,vowel=0,consonant=0,space=0;
    printf("Enter the string\n");
    scanf("%s",a);
    n=strlen(a);
    for(i=0;a[i]!='\0';i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
            vowel++;
        }
        else if(a[i]==' '){
            space++;
        }
        else{
            consonant++;
        }
    }
    printf("Number of vowels is %d\n",vowel);
    printf("Number of consonants is %d\n",consonant);
    printf("Number of spaces is %d\n",space);
}
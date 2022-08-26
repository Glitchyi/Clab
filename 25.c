/* Create a file and perform the following:
i) Write data to the file
ii)  Read the data in a given file & display the file content on the console
iii) Append new data and display it on the console
*/
#include<stdio.h>
void main(){
    FILE *fp;
    fp = fopen("25.txt", "w");
    fprintf(fp, "Hello World\n");
    fclose(fp);

    fp = fopen("25.txt", "r");
    char ch;
    while((ch = fgetc(fp)) != EOF){
        printf("%c", ch);
    }
    fclose(fp);

    fp = fopen("25.txt", "a");
    fprintf(fp, "Hello World\n");
    fclose(fp);
    fp = fopen("25.txt", "r");
    while((ch = fgetc(fp)) != EOF){
        printf("%c", ch);
    }
    fclose(fp);

}
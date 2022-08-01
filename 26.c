//Open a text input file and count the number of characters, words, and, lines in it; and store the results in an output file.
#include<stdio.h>
void main(){
    FILE *fp;
    fp = fopen("26.txt", "r");
    int c=0,w=0,l=0,i=0;
    char ch;
    while (1){
        ch = fgetc(fp);
        if(ch == '\n'){
            l++;
        }else if(ch == ' '){
            w++;
        }else if(ch != '\n' && ch != ' ' && ch != EOF){
            c++;
        }
        if(ch == EOF){
            l++;
            c--;
            w+=l;
            break;
        }
        i++;
    }
    printf("c=%d w=%d l=%d\n", c, w, l);
}
//Compute the sum of two numbers using pointer
void main(){
    int a = 10;
    int b = 20;
    int *p;
    p = &a;
    int *p1;
    p = &b;
    printf("%d\n", *p);
    printf("%d\n", *p+*p1);
}
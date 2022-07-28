//Compute the sum of two numbers using pointer
void main(){
    int a = 10;
    int b = 20;
    int *p;
    p = &a;
    printf("%d\n", *p);
    p = &b;
    printf("%d\n", *p);
    printf("%d\n", a+b);
}
//distance formula in c using structures
#include <stdio.h>
#include <math.h>
struct point
{
    float x;
    float y;
};
int main()
{
    struct point p1, p2;
    float d;
    printf("Enter the coordinates of p1\n");
    scanf("%f%f", &p1.x, &p1.y);
    printf("Enter the coordinates of p2\n");
    scanf("%f%f", &p2.x, &p2.y);
    d=sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y));
    printf("The distance between p1 and p2 is %f\n", d);
    return 0;
}


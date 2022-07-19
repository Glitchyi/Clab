//Read the radius of a circle and calculate its area. and then display the area.
#include<stdio.h>
void main(){
    float r,area;
    printf("Enter the radius of a circle\n");
    scanf("%f",&r);
    area=3.14*r*r;
    printf("Area of a circle is %f\n",area);
}
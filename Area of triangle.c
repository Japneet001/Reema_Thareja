// write a program to calculate the area of a triangle using Hero's formula.
#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,s,Area;
    printf("Enter lengths of the sides: ");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    Area=pow((s*(s-a)*(s-b)*(s-c)),0.5);
    printf("Area of the triangle is %.2f",Area);
    return 0;
}

#include<stdio.h>
#define pi 3.142
int main()
{
    float r,area;
    printf("enter the value of r:");
    scanf("%f",&r);
    area=pi*r*r;
    printf("the area of the circle is:%f",area);
    return area;
}
#include<stdio.h>
#define pi 3.142
int main()
{
    float h,r,area;
    printf("enter the height and radius:");
    scanf("%f%f",&h,&r);
    area=(2*pi*r*r)+(2*pi*r*h);
    printf("the area of the circle is:%f",area);
    return area;
}
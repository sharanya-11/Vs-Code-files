#include<stdio.h>
int main()
{
    float f,c;
    printf("enter the temperature in degree:");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("temperature in faranheit is:%f",f);
    return f;
}
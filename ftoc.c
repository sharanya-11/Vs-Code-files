#include<stdio.h>
int main()
{
    double f,c;
    printf("enterthe value of f:");
    scanf("%lf",&f);
    c=(f-32)*5/9;
    printf("temperature in celcius is:%lf",c);
    return 0;
}
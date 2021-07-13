#include<stdio.h>
int main()
{
    float p,t,r,SI;
    printf("enter the principle amount:");
    scanf("%f",&p);
    printf("enter the time period:");
    scanf("%f",&t);
    printf("enter the rate of interest:");
    scanf("%f",&r);
    SI=(p*t*r)/100;
    printf("obtained simple interest is:%f",SI);
    return SI;

    
}
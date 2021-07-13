#include<stdio.h>
int main()
{
    int fact=1,i,n;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
    fact=fact*i;
    printf("%d\t",fact);
    }
    printf("factorial of %d is %d:\n",n,fact);

}
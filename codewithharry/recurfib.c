#include<stdio.h>
int fib(int n)
{
    if(n==0)
    {
    return 0;
    }
    else if(n==1)
    {
    return 1;
    }
    else
    { 
    return fib(n-1)+fib(n-2);
    }

}
int main()
{
    int n,f;
    printf("enter the value of n:");
    scanf("%d",&n);
    f=fib(n);
    printf("fibonaccii of %d is %d",n,f);
}
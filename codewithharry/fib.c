#include<stdio.h>
int fib(int);
int main()
{
    int n,f;
    printf("enter the value of n:");
    scanf("%d",&n);
     f=fib(n);
    printf("the fibonacii series is %d:",f);
   
    return 0;

}
int fib(int n)
{
   if(n==0)
   {
       return 0;
   }
   if(n==1)
   {
       return 1;
   }
   else
   {
      return fib(n-1)+fib(n-2);

   }
   

}
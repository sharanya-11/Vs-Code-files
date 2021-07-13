#include<stdio.h>
int main()
{
    int i=1,t1=0,t2=1,n,nextterm;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("fibonacii series:\n");
    while(i<=n)
        {
            nextterm =t1+t2;
            printf("%d\n",t1);
            t1 = t2;
            t2=nextterm;
            i++;

            
        }


}
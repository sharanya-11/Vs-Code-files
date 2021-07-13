#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=n;i>=0;i--)
    {
        printf("%d\t",i);
    }
    return 0;
}
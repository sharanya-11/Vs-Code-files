#include<stdio.h>
int main()
{
    int i,j,n,a,k;
    printf("rows:");
    scanf("%d",&n);
    for(i=0;i<=2*n-1;i++)
    {
        if(j==0)
        printf("*");
    }
    
    for(i=1;i<=n;i++)
    {
        
        
        for(j=1;j<=2*i-1;j++)
        {
            if(j<=i)
            {
                printf("%d",j);
                a=j;
                
            }
                else
                {
                printf("%d",--a);
            }
            
        }printf("*");
        printf("\n");
        for(k=1;k<=2*i+1;k++)
    {
        if(k==1||k==2*i+1)
        printf("*");
    }
    }
    
    for(i=n-1;i>=1;i--)
    {
        printf("*");
        for(j=1;j<=2*i-1;j++)
        {
            if(j<=i)
            {
                printf("%d",j);
                a=j;
            }
                else
                {
                printf("%d",--a);
            }
        }printf("*");
        printf("\n");
    }
    
}
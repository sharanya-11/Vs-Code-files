#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("no.of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n;j++)
        {
            if(j<=i||j>(2*n-i))
            printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}
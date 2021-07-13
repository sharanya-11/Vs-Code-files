#include <stdio.h>
int main()
{
    int i,j,k,n,a;
    printf("enter the no.of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        printf(" ");
        for(k=1;k<=2*i-1;k++)
        {
           if(k<i)
           printf("%d",k);
           else if(k==i) 
           {
           printf("%d",k);
           a=k;
           }
           else
           {
           printf("%d",--a);
           }
           
           
        }
        printf("\n");
    }
}








/*   1
    121
   12321
  1234321
 123454321 */
#include<stdio.h>
int main()
{
    int i,j,row;
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row;j++)
           {
             if(i%2==0)
             {
             printf("%3c",96+i);
             }
             else 
             {
             printf("%3c",64+i);
             }
           }
           printf("\n");
    }
    return 0;
}
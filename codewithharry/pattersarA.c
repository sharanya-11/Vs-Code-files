#include<stdio.h>
int main()
{
    int i,j,k,row;
    char ch='A';
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row;j++)
        {
            if((i==1)||(i==row)||(j==1)||(j==row))
            printf("*");
            else 
           printf("%c",ch++);
           if(ch>'Z')
           ch='A';
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int pattern(int);
void main()
{
    int rows;
    printf("enter the no.of rows:");
    scanf("%d", &rows);
    pattern(rows);
}
int pattern(int rows)
{
    int i,j;
    rows=5;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=2*i-1;i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
    
}
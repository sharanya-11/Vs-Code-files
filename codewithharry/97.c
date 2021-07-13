#include<stdio.h>
int main()
{
    int num = 0;
    printf("enter a number:");
    scanf("%d",&num);
    if(num%97==0)
    
        printf("%d is devisible by 97",num);
        else
        printf("%d is not devisible by 97",num);
     return num%97;
}
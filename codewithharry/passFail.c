#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,avg;
    printf("enter the marks in sub1,sub2,sub3:");
    scanf("%d%d%d",&sub1,&sub2,&sub3);
    avg=(sub1+sub2+sub3)/3;
    if((avg>=40)&&(sub1&&sub2&&sub3>=33))
    {
           printf("pass");
    }
   
    
    else
    {
        printf("fail");
    }
    return 0;

}

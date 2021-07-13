#include<stdio.h>
#include<string.h>
int main()
{
    float a,b;
    char  op;
    
    printf("enter the value of a and b:");
    scanf("%f%f",&a,&b);
    printf("enter the tpe of operator:");
    scanf("%s",&op);
    switch(op)
    {
        case '+':
        printf("%f+%f=%f",a,b,a+b); 
        break;
        case '-':
        printf("%f+%f=%f",a,b,a-b); 
        break;
        case '*':
        printf("%f+%f=%f",a,b,a*b); 
        break;
        case '/':
        printf("%f+%f=%f",a,b,a/b); 
        break;
        default:
        printf("invalid operator");

    }
  
}
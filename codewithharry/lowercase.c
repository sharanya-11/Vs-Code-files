#include<stdio.h>
int main()
{
    char ch;
    printf("enter a charecter:\n");
    scanf("%c",&ch);
    if(ch>=97&&ch<=122){
    printf("charecter is in lowercase and ascii value is %d",ch);
    }
    else
    {
    printf("charecter is in uppercase and the ascii value is %d",ch);
    return ch;
    }
}
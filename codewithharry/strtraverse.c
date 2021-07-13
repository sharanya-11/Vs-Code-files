#include<stdio.h>
#include<string.h>
int string(char);

int main()
{
    int val;
    char strng;
    printf("enter a string:");
    scanf("%c",&strng);
    string(strng);
    printf("the resulting value is %d",val);
    return 0;
   
}
int string(char* str)
{
    int i,val;
    for(i=str[0];i<=strlen(str);i++)
    {
        if (str[i]=='A')
        {
            val=(i-1)&(i+1);
            str[0]=val;
        }
        else if(str[i]=='B')
        {
            val=(i-1)|(i+1);
            str[0]=val;
        }
        else if(str[i]=='C')
        {
            val=(i-1)^(i+1);
            str[0]=val;
        }
        else continue;
       
    }
    return val;
   
}
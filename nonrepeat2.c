#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],character;
    printf("enter a string: ");
    gets(str);
    int i,j,found=0,count=0;
    for(i=0;i<strlen(str);i++){
        count=0;
        for(j=0;j<strlen(str);j++)
        {
            if(i!=j&&str[i]==str[j])
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            character=str[i];
            found=1;
            break;
        }
    }
    if(found==0)
    {
        printf("all d chars are repeted");
    }
    else
    {
        printf("the non repeted char in %s is %c",str,character);
    }
}
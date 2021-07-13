#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50],s2[50],s3[100]=" is a friend of ";
    int i;
    printf("enter 2 strings s1 and s2:");
    gets(s1);
    gets(s2);
    puts(s1);
    puts(s2);
    strcat(s1,s3);
    strcat(s1,s2);
    printf("\"%s\"\n",s1);
    
        return 0;
}

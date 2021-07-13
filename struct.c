#include<stdio.h>
#include<string.h>
struct food{
    char item[20];
    int quantity;
    struct sweet{
        char dish[15];
        int quantity;
    }sw;
}fd;
int main()
{
    strcpy(fd.item,"dessert");
    fd.quantity=12;
    strcpy(fd.sw.dish,"gajar halwa");
    fd.sw.quantity=5;
    printf("list of food are:\n");
    printf("\nitem=%s\n\nquantity=%d \n\ndish=%s \n\nquantity=%d",fd.item,fd.quantity,fd.sw.dish,fd.sw.quantity);
}
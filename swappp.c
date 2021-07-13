#include<stdio.h>
int main()
{
    int a=20,b=10,*p1=&a,*p2=&b;
    printf("before swpping: *p1=%d,*p2=%d",*p1,*p2);
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    printf("the value of a and b after swapping is %d and %d ",*p1,*p2);
    return 0;

}
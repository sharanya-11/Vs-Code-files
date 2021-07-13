#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i;
int *p;
printf("enter the size:");
scanf("%d",&n);
p=(int*)malloc(n*sizeof(int));
if(p==NULL)
{
    printf("memory insufficient");
}
for(i=0;i<n;i++)
{
    scanf("%d",p+i);
}
for(i=1;i<n;i++)
{
    if(*p<*(p+i))
    {
        *p=*(p+i);
    }
}
printf("the greatest element is:%d",*p);
}
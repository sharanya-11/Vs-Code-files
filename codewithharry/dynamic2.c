#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,temp;
    int *p;
    printf("enter the size:");
    scanf("%d",&n);
    p=(int*)calloc(5,sizeof(int));
    if(p==NULL)
    {
        printf("no enough storage");

    }
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);

       printf("%d ",*(p+i));
    }
     for(i=0;i<n;i++)
     {
         for(j=i+1;j<n;j++)
         {
             if(p[i]>p[j])
             {
                 temp=p[i];
                 p[i]=p[j];
                 p[j]=temp;

             }
         }
     }
     printf("the ascending order is:");
          for(i=0;i<n;i++){
      printf("%d",*(p+i));
     }
}
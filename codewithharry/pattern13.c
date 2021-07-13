#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the value ofn:");
    scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       if(i<n)
       {
           printf(" ");
       }
       for(j=1;j<=i;j++)
       {

           
           
          printf("%d",j);

       }printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        printf(" ");
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }printf("\n");
        
        
    }
       
       
   
}


/* 1
   1 2
   1 2 3 
   1 2 3 4
   1 2 3 4 5
   1 2 3 4
   1 2 3 
   1 2
   1*/
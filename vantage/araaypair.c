#include<stdio.h>
 int countpair(int *arr, int n)
    {
        int i,j,count=0;
    for(i=0;i<n-1;i++)
    {
        
        for(j=i+1;j<n;j++)
        {
            if((i+j)==(arr[i]+arr[j]))
            
                count++;
            
        }
       
    }
   return count;
}
int main()
{
    int i,j,n,c;
    char arr[10];
    printf("enter the number of elements ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&arr[i]);
      

    }
    
    c=countpair(arr,n);
    printf("%d",c);
    return 0;
}
   
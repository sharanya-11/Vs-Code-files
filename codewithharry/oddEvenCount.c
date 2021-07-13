#include<stdio.h>
int oddEvenCounDefference(int n,int arr[])
{
   int even=0,odd=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even+=1;
        }
        else
        {
            odd+=1;
        }
    }
    return odd-even;
}
int main()
{
   int n=6,result;
   int array[]={12,43,44,56,66,67};
   result= oddEvenCounDefference( n, array);
   printf("defference is %d ",result);
   return 0;
}

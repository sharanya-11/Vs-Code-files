#include<stdio.h>
int findDefference(int n,int arr[])
{
    int even=0,odd=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            even=even+arr[i];
        }
        else
        {
            odd=odd+arr[i];
        }
        
    }
    
     return even-odd;
}

int main()
{
    int i,n,result;
    int array[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    result=findDefference(n,array);
    printf("%d",result);
    return 0;

}
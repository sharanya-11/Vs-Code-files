#include <stdio.h>
int findTotalCurtains(int n,int arr[])
{
    int count=0,i,qo;
    for(i=0;i<n;i++)
    {
        if(arr[i]>12)
        {
            qo=arr[i]/12;
            count=count+qo;

        }
    }
    return count;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int result=findTotalCurtains(n,array);
    printf("number of curtains are %d",result);
    return 0;
}
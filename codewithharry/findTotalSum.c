#include <stdio.h>
#include <stdlib.h>
int findTotalSum(int n, int arr[], int start)
{
    int difference, sum=0;
    for(int i=start-1; i<n-1; i++)
    {
        difference = abs(arr[i]-arr[i+1]);
        sum = sum + difference;
    }
    return sum;
}
int main()
{
    int n;
    int start;
    scanf("%d",&n);
    int array[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    scanf("%d",&start);
    int result = findTotalSum(n, array, start);
    printf("\n%d",result);
    return 0;
}
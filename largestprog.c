#include<stdio.h>
int main()
{
    int arr[100],n,i,largest,sec_largest;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("enter the elements of array\n");
    for(i=0;i<n;i++)
    {
    scanf("%d\t",&arr[i]);
    }
    largest=arr[0];
    sec_largest=arr[1];
    for(i=0;i<n;i++)
    {
    if(arr[i]>largest)
    {
        sec_largest=largest;;
        largest=arr[i];
    }
    else if(arr[i]>sec_largest&&arr[i]!=largest)
    {
        sec_largest=arr[i];
    }
    }
    printf("largest and secnd largest number in array are:\n %d\n%d",largest,sec_largest);
    

}
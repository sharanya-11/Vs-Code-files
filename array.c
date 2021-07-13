 
#include<stdio.h>
void swap(int[]);
int main()
{
    int arr[5]={5,2,8,3,6};
    swap(arr);
}
void swap(int a[])
{
    int temp;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("the srted list is:\n");
for (int i=0;i<5;i++)
{
    printf("%d\n",a[i]);
}
}

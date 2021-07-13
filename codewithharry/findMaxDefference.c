#include<stdio.h>
int findMaxDefference(int,int[]);
int main()
{
    int n,i;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int m=findMaxDefference(n,array);
    printf("the maximum value is:%d",m);
    return 0;
}
int findMaxDefference(int input1,int input2[])
{
    int i,max,diff;
     max=input2[0]-input2[1];
    for(i=1;i<input1-1;i++)
    {
       
        diff=input2[i]-input2[i+1];
        printf("%d\n",diff);
        if(diff>max)
        {
        
            max=diff;
        }
    }
return max;

}
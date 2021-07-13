#include<stdio.h>
int sum(int);
int main()
{
  int n;
  printf("enter the number of elements:");
  scanf("%d",&n);
  printf("the sum of %d numbers is:",n);
  int result=sum(n);
  printf("%d",result);
  return result;

}
int sum(int n)
{
    int i,sum=0;
    if(n==1)
    {
      return 1;
    }
    else{
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
    }

}

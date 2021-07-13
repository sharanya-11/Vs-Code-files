#include<stdio.h>
int main()
{
  int i,j,n;
  int val=1;
scanf("%d",&n);
  // outer for loop with decrement operator
  for(i=1;i<=n;i++)
  {

    // inner for loop with increment operator
    for(j=1;j<=i;j++)
    {
      printf("%d ",val++);
    }

    // new line
    printf("\n");
  }

  return 0;
}
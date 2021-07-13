#include<stdio.h>
int main()
{
  int n, r, c, a=0;
  char ch='A';

  printf("Enter number of rows: ");
  scanf("%d",&n);

  for(r=1; r<=n; r++)
  {
    for(c=1; c<=r; c++)
    {
      if(r%2==1) printf("%5c",ch);
      else printf("%5d",a);
    }

    printf("\n");
    if(r%2==0) ch++;
    else a++;
  }

  return 0;
}
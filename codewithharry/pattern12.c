#include<stdio.h>
int main()
{
  int n,k;
  char ch;

  printf("Enter number of lines: ");
  scanf("%d",&n);

  for(int i=0; i<=n; i++)
  {
    ch = 'A';
    for(int j=0; j<=n-i; j++, ch++)
    {
      printf("%c",ch);
    }
    if(i==0)
    printf("%c",ch);
    else
    for(k=0;k<2*i+1;k++)
    {
        printf(" ");
    }
    for(int j=0;j<=n-i;j++)
    {
        printf("%c",--ch);
    }

    

    printf("\n");
  }
  return 0;
}
/*1
  3 2
  4 5 6 
  10 9 8 7
  11 12 13 14 */
  #include<stdio.h>
  int main()
  {
      int i,j,n,a=1,b;
      scanf("%d",&n);
      for(i=0;i<=n;i++)
      {
          b=a+i-1;
          for(j=1;j<=i;j++, a++)
          {
              if(i%2==1)
              printf("%d",a);
              else
              printf("%d",b--);
          }
          printf("\n");
      }
      return 0;
  }
/* 
 Enter number of lines: 5
 ABCDEFGFEDCBA
 ABCDE   EDCBA
 ABCD     DCBA
 ABC       CBA
 AB         BA
 A           A*/
 #include<stdio.h>
 int main()
 {
     int i,j,n;
     char ch='A',a;
     printf("no.of rows:");
     scanf("%d",&n);
     for(i=n;i>=0;i--)
     {
         for(j=1;j<=2*n+3;j++)
         {
            if(j<=i+(i-3))
            {
            printf("%c",ch++);
            a=ch;
            }
           
         }
     
         printf("\n");
          ch='A';

     }
           
 }#include<stdio.h>
int main()
{
  int n;
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
    {
      printf("%c",ch);
    }
    else
    {
      for(int k=0; k<(2*i)+1; k++){
        printf(" ");
      }
    }

    ch--;
    for(int j=0; j<=n-i; j++, ch--)
    {
      printf("%c",ch);
    }

    printf("\n");
  }
  return 0;
}
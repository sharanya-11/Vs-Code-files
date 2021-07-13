


/*Author: Md Shoaib
  Purpose: understand break statement(computer shopkeeper and customer)
  Date: 04/07/2019 */
#include <stdio.h>
int main()
{
  //variable declaration
  int i, laptop;
  //story starts here
  printf("Once upon a time a customer enters a computer shop and ask to shopkeeper some few questions:\n");
  //for loop
  for (i = 0; i < 10; i++)
  {
    printf("%d\n(Type 1 to ask to shopkeeper that Dukandar ji i3 processor with other specification main ek laptop kitne main parega.\nType 2 to ask i5 processor with other specification main ek laptop kitne main parega.\nType 3 to ask i7 processor with dedicated 8 GB of graphics card and other specification main ek laptop kitne main parega.)\n", i);
    scanf("%d", &laptop);
    if (laptop == 1)
    {
      printf("\nYes sir i3 processor with other specification iski kimat lagbhag aapko 30k main parega.");
      break;
    }
    else if (laptop == 2)
      {
        printf("\nYes sir i5 processor with other specification iski kimat lagbhag aapko 50k main parega.");
        break;
      }
    else if (laptop == 3)
    {
      printf("\nYes sir this is an expensive machine, i7 processor with dedicated 8 GB graphics card and other specification iski kimat lagbhag aapko 1lakh main parega.");
      break;
    }
    
  }

  return 0;
}
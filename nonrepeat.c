#include <stdio.h> 
#include <string.h>

void NonrepeatingCharacter(char * str) {
  int i,j,repeated=0,f=0;
  int len=strlen(str);
  char cherecter;
  for(i=0;i<len;i++)
  {
    repeated=0;
    for(j=0;j<len;j++)
    {
      if(i!=j&&str[i]==str[j])
      {
      
        repeated++;
       
      }
      
    }
    if(repeated==0)
   { 
   cherecter=str[i];
  f=1;
  
  break;
   }

  }

  
  
  

  if(f==0)
  {
    printf("all  charecters are repeated");
  } 
  else{
  printf("the non repeated charecter in %s is %c",str,cherecter);
  }

}

int main(void) { 
  char str[100];
  
   printf("enter a string: ");
  gets(str);
  // keep this function call here
  NonrepeatingCharacter(str);
  return 0;
    
}
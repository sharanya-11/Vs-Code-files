#include <stdio.h>
int main()
{
  int res=0;
  int arr[20]={1,2,3,2,3,1,4,5,5,6,6};
  for(int i=0;i<13;i++)
  {
    res=res^arr[i];
  }
  printf("%d",res);
}
 
    

    
    
  
 

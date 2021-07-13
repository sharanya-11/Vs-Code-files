#include <stdio.h>  
int main()  
{  
   int *ptr=(int *)malloc(sizeof(int));  
   int a=560;  
   ptr=&a;  
   ptr;
    
   return 0;  
}  
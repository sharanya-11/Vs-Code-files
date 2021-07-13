#include<stdio.h>    
void main ()    
{    
    int i, j,temp;     
    int a[10] = { 100,95,85,75,65,55,44,43,32,21};     
    for(i = 0; i<10; i++)    
      {
        for(j = i+1; j<10; j++)    
          {
            if(a[j] < a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
          }
      }   
    printf("Printing Sorted Element List ...\n");    
    for(i = 0; i<10; i++)    
    {    
        printf("%d\t",a[i]);    
    }    
}     
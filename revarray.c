

#include<stdio.h>
void Arrayrev(int array[])
{  int end=6;
    while(end>=0)
    {

     printf("%d  ", array[end]);
     end--;
    }
}
int main()
{
   int array[9] ={1,2,3,4,7,9,22};
   Arrayrev(array);
return 0;
}
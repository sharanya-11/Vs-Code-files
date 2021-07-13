#include<stdio.h>
int main()
{
 int arr[7] = {2,4,6,18,8,10};
 int first = 0;
 int last = 5;
 int temp;
 while(first < last)
 {
  arr[first]  = arr[first] + arr[last];
  arr[last] = arr[first] - arr[last];
  arr[first] = arr[first] - arr[last];  first ++;
  last --;
 }
 for(int i = 0; i < 6; i++)
 {
  printf("%d\n", arr[i]);
 } return 0;
}
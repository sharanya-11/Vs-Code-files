#include<stdio.h>
int add(int b[],int len){
    int i,sum=0;
    for(i=0;i<len;i++){
        sum+=b[i];
    }
     return sum;
}
int main()
{
    int a[4]={6, 12, 18 ,24};
    int len=sizeof(a)/sizeof(a[0]);
    printf("%d",add(a,len));
    return 0;
}
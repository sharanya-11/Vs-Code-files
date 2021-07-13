#include<stdio.h>
int revarray(int*);
int main()
{
    int array[]={4,6,5,3,8};
    revarray(array);
    return 0;
}
int revarray(int *array)
{
    for(int i=4;i>=0;i--)
    {
        printf("%d",array[i]);
    }

}
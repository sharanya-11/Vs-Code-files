#include<stdio.h>
int funcBouquet(int Stick[],int random)
{
    
    int size=sizeof(Stick);
    int i,j;
    for(int i=0;i<random;i++)
    { 
        for(j=i+1;j<random;j++)
        {
            if(Stick[i]>Stick[j])
            {
                int temp=Stick[i];
                Stick[i]=Stick[j];
                Stick[j]=temp;
            }
        }
    }
    for(int i=random;i<=size-1;i++)
    {
        for(j=i+1;j<=size-1;j++)
        {
            if(Stick[i]<Stick[j])
            {
                int temp=Stick[i];
                Stick[i]=Stick[j];
                Stick[j]=temp;
            }
        }
    }
    for(int i=0;i<random;i++)
    printf("%d\t",Stick[i]);
    
    for(int i=random;i<=size-1;i++)
    printf("%d\t",Stick[i]);
    
}
int main()
{
    int flowerStick[20],i,j,random,size;
    printf("enter the size of array: ");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        scanf("%d",&flowerStick[i]);
    }
    printf("enter the random number: ");
    scanf("%d",&random);
    int result=funcBouquet(flowerStick,random);
    return 0;
}
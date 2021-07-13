#include<iostream>
#include<vector>
using namespace std;
int funcBouquet (vector<int> Stick,int rand)
{

    
    int Stick_size=Stick.size();
    
    for(int i=0;i<rand;i++)
    {
        for(int j=i+1;j<rand;j++){
            if(Stick[i]>Stick[j])
            {
                int temp=Stick[i];
                Stick[i]=Stick[j];
                Stick[j]=temp;
            }
        }
    }
    for(int i=rand;i<=Stick_size-1;i++)
    {
        for(int j=i+1;j<=Stick_size-1;j++)
        {
            if(Stick[i]<Stick[j])
            {
                int temp=Stick[i];
                Stick[i]=Stick[j];
                Stick[j]=temp;
            }
        }
    }
    for(int i=0;i<rand;i++)
    cout<<Stick[i]<<" ";
    for(int i=rand;i<Stick_size-1;i++)
    cout<<Stick[i]<<" ";
    
}

int main()
{
    int flowerStick_size,temp;
    cin>>flowerStick_size;
    vector<int> flowerStick;
    for(int i=0;i<flowerStick_size;i++)
    {
        int temp;
        flowerStick.push_back(temp);

    }
    int random;
    cin>>random;
    int result=funcBouquet(flowerStick,random);return 0;
}
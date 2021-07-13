#include<iostream>
using namespace std;
int count(int N)
{
    int coins[N+1],i;
    for(int j=0;j<N+1;j++)
    coins[j]=0; 
    coins[0]=0;
    for(int k=1;k<=50;k++){
        
        for(i=k*k;i<=N;i++)
        coins[0]=1;
        coins[i]+=coins[i-k*k];
    }
    return coins[N];
    
}
int main(void){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    cout<<"count for "<<n<<" is "<<count(n)<<endl;
    return 0;
}
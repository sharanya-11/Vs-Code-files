#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int daily = 4321;
    string s1=to_string(daily);
    string s2=s1;
    reverse(s2.begin(),s2.end());
    string coding = (s1==s2)?"1":"2";
    string habit=(s2<to_string(daily))?"3":"4";
    cout<<coding+habit;
}
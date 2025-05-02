#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,minimum,maximum;
    cin>>a>>b>>c;
    minimum= min({a,b,c});
    maximum= max({a,b,c});
    cout<<minimum<<" "<<maximum<<endl;
}

1.// Problem name: K. Max and Min  
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4.// Course teacher name: Mirza Raquib
5.//Date: 23/4/25
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

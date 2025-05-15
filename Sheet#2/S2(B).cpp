1.// Problem name: B. Even Numbers
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4.// Course teacher name: Mirza Raquib
5.//Date: 23/4/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if(n==1)cout<<-1<<endl;
    else{
    for(int i=1;i<=n;i++)
    {
    if(i%2==0)cout<<i<<endl;
    }
    }
}

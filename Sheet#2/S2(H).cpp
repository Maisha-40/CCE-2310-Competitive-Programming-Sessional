1.// Problem name: H. One Prime  
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
    bool flag =true;
    for(long long i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag = false;
            break;
        }
    }
if(flag)
    cout<<"YES"<<endl;
else
    cout<<"N0"<<endl;
}

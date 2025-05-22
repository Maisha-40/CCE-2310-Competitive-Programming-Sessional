1.// Problem name: R. Sequence of Numbers and Sum 
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4.// Course teacher name: Mirza Raquib
5.//Date: 19/5/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
while(1)
{
    int x,y;
    cin>>x>>y;
    int minn=min(x,y);
    int maxx=max(x,y);
    int sum=0;
    if(x<=0||y<=0)
    {
        break;
    }
    for(int i=minn;i<=maxx;i++)
    {
        cout<<i<<" ";
    sum+=i;
    }
    cout<<"sum ="<<sum<<endl;
}
}

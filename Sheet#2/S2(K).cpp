1.// Problem name: K. Divisors  
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
    vector<long long>v;
    for(long long i=1;i<=sqrt(n);i++ )
    {
        if(n%i==0)
        {
            long long vagfol=n/i;
            if(i!=vagfol)
            {

                v.push_back(i);
                v.push_back(vagfol);
            }
            else if(i == vagfol)
                v.push_back(i);
        }
    }
        sort(v.begin(),v.end());
        for(long long i=0;i<v.size();i++)
        {
            cout<<v[i]<<endl;
        }

}

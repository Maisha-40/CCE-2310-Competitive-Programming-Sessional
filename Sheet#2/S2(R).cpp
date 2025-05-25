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
        long long a,b,max_v,min_v;
        cin >> a >> b;
        if(a <= 0 || b <= 0)
            break;
        if(a >= b)
        {
            max_v = a;
            min_v = b;
        }
        else
        {
            max_v = b;
            min_v = a;
        }

        long long sum = 0;
        for(int k = min_v; k <= max_v; k++)
        {
            cout << k << " ";
            sum = sum + k;
        }

        cout << "sum =" << sum << endl; 
    }
}

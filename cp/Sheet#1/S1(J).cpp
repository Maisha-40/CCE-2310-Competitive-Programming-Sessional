1.// Problem name: J. Multiples  
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4:// Course teacher name: Mirza Raquib
5://Date: 23/4/25
#include <bits/stdc++.h>
using namespace std;
int main()
{
int A, B;
cin>>A>>B;
if(A % B == 0 || B % A == 0)
{
cout<<"Multiples"<<endl;
}
else
{
cout<<"No Multiples"<<endl;
}
}

1.// Problem name:  D. Strings 
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4.// Course teacher name: Mirza Raquib
5.//Date: 23/6/25
#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s,t;
  cin>>s>>t;
 cout<<s.size()<<" "<<t.size()<<endl<<s<<t<<endl;
 char c=s[0];
 s[0]=t[0];
 t[0]=c;
 cout<<s<<" "<<t<<endl;
}





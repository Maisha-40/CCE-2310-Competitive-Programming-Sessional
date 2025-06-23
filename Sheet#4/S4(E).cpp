1.// Problem name:   E. Count
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4.// Course teacher name: Mirza Raquib
5.//Date: 23/6/25
#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
  cin>>s;
  int sum=0;
  for(int i=0;i<s.size();i++)
  {
      sum += s[i]-'0';
  }
  cout<<sum<<endl;
}





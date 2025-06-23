1.// Problem name:  B. Let's use Getline 
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4.// Course teacher name: Mirza Raquib
5.//Date: 23/6/25
#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s,t;
   getline(cin,s);
   for(int i=0;i<s.size();i++)
   {
       if(s[i]=='\\')
       {
           break;
       }
       else
        cout<<s[i];
   }

}

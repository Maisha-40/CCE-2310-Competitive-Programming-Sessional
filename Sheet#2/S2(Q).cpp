1.// Problem name: Q. Digits  
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4.// Course teacher name: Mirza Raquib
5.//Date: 23/4/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
for(int i=0;i<n;i++) {
int x;
cin>>x;
if(x==0) {
cout<<0<<" ";
}
while(x!=0) {
cout<<x%10<<" ";
x/=10;
}
cout<<endl;
}
}

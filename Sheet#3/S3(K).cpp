1.// Problem name:  K. Sum Digits 
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4.// Course teacher name: Mirza Raquib
5.//Date: 22/6/25
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int sum = 0;
    int i = 0;

    while(i<n) {
    sum=sum + (s[i] - 48);
    i++;
    }
 cout<<sum;

}

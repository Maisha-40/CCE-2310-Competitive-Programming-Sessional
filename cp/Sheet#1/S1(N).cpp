1.// Problem name: N. Char
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4.// Course teacher name: Mirza Raquib
5.//Date: 23/4/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char X;
    cin>>X;
    if(islower(X)) {
    cout<<char(X - 32)<<endl;
    } else if (isupper(X)) {
    cout<<char(X + 32)<<endl;
    } 
    else {
    cout<< "Invalid input.enter an alphabet letter." <<endl;
    }
}

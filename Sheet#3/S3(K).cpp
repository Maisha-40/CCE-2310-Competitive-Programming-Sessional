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

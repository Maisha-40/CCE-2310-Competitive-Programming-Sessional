1.// Problem name:  N. Numbers Histogram 
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4.// Course teacher name: Mirza Raquib
5.//Date: 19/5/25
#include<bits/stdc++.h>
using namespace std;

int main(){
char S;
int N;
cin>>S>>N;
vector<int>numbers(N);
for(int i=0; i<N; i++) {
cin>>numbers[i];
}
for(int i=0; i<N; i++) {
cout<<string(numbers[i], S)<<endl;
}
}

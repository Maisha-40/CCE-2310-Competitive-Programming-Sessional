1.// Problem name: R. Age in Days 
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4.// Course teacher name: Mirza Raquib
5.//Date: 23/4/25
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    cout << N / 365 << " years" << endl;
    cout << (N % 365) / 30 << " months" << endl;
    cout << (N % 365) % 30 << " days" << endl;
    return 0;
}

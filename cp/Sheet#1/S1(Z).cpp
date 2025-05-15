1.// Problem name:  Z. Hard Compare 
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4.// Course teacher name: Mirza Raquib
5.//Date: 23/4/25
#include<bits/stdc++.h>
using namespace std;

int main() {
    long double A, B, C, D;
    cin >> A >> B >> C >> D;
    long double logAB = B * log(A);
    long double logCD = D * log(C);

    if (logAB > logCD) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

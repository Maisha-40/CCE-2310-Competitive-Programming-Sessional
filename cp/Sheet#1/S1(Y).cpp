1.// Problem name: Y. The last 2 digits 
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4.// Course teacher name: Mirza Raquib
5.//Date: 23/4/25
#include<bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, C, D;
   cin >> A >> B >> C >> D;

    long long result = ((A % 100) * (B % 100) % 100 * (C % 100) % 100 * (D % 100) % 100) % 100;

    if (result < 10) {
        cout << "0" << result << endl;
    } else {
        cout << result << endl;
    }
}

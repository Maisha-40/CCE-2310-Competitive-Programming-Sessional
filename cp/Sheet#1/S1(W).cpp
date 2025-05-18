1.// Problem name: W. Mathematical Expression   
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4.// Course teacher name: Mirza Raquib
5.//Date: 23/4/25
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    char S, Q;
    cin >> A >> S >> B >> Q >> C;

    bool correct = false;
    int result = 0;

    if (S == '+') result = A + B;
    else if (S == '-') result = A - B;
    else if (S == '*') result = A * B;

    if (result == C) cout << "Yes" << endl;
    else cout << result << endl;

    return 0;
}

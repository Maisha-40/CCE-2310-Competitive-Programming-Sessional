1.// Problem name: B. Memo and Momo  
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4.// Course teacher name: Mirza Raquib
5.//Date: 23/4/25
#include<bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, k;
    cin >> a >> b >> k;

    bool aDivisible = (a % k == 0);
    bool bDivisible = (b % k == 0);

    if (aDivisible && bDivisible) {
        cout << "Both" << endl;
    } else if (aDivisible) {
        cout << "Memo" << endl;
    } else if (bDivisible) {
        cout << "Momo" << endl;
    } else {
        cout << "No One" << endl;
    }

    return 0;
}

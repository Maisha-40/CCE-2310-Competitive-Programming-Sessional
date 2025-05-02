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

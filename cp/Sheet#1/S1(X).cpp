1.// Problem name: X. Two intervals 
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4.// Course teacher name: Mirza Raquib
5.//Date: 23/4/25
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    long long start = max(l1, l2);
    long long end = min(r1, r2);
    if (start <= end)
        cout << start << " " << end << endl;
    else
        cout << -1 << endl;

    return 0;
}

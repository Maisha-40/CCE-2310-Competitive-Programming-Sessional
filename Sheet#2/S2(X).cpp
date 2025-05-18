1.// Problem name: X. Convert To Decimal 2  
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4.// Course teacher name: Mirza Raquib
5.//Date: 23/4/25
#include <bits/stdc++.h>
using namespace std;
int main() {
long long n;
    cin >> n;
for (long long line = 1; line <= n; line++) {
for (long long space = 1; space <= (n - line); space++) {
cout << " ";
}
for (long long star = 1; star <= (2 * line - 1); star++) {
cout << "*";
}
cout <<endl;
}


    for (long long line = n; line >= 1; line--) {
        for (long long space = 1; space <= (n - line); space++) {
            cout << " ";
        }
        for (long long star = 1; star <= (2 * line - 1); star++) {
            cout << "*";
        }
        cout <<endl;
    }

}



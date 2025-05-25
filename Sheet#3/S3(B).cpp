#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, X;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];}
    cin >> X;

    bool flag = false;
    for (int j = 0; j < n; j++) {
        if (arr[j] == X) {
            cout << j << endl;
            flag = true;
            break;  }
    }
    if (!flag) {
        cout << -1 << endl;
    }
}

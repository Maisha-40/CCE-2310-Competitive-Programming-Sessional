#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    int minimum= 0, maximum= 0;
    for (int i = 1; i < N; i++) {
        if (a[i] < a[minimum]) {
            minimum = i;
        }
        if (a[i] > a[maximum]) {
            maximum = i;
        }
    }
    int temp = a[minimum];
    a[minimum] = a[maximum];
    a[maximum] = temp;
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}

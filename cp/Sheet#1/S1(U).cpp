#include<bits/stdc++.h>
using namespace std;

int main() {
    float N;
    cin >> N;

    int intPart = (int)N;
    float decimalPart = N - intPart;

    if (decimalPart == 0) {
        cout << "int " << intPart << endl;
    }
    else {
        cout << "float " << intPart << " " << fixed << setprecision(3) << decimalPart << endl;
    }
}

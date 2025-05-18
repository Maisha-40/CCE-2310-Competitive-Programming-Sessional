1.// Problem name: I. Lucky Numbers  
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4.// Course teacher name: Mirza Raquib
5.//Date: 23/4/25
#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int tens = N / 10;
    int units = N % 10;

    if ((tens != 0 && units % tens == 0) || (units != 0 && tens % units == 0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

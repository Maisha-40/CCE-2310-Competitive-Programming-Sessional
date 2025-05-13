1.// Problem name: U. Float or int  
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4.// Course teacher name: Mirza Raquib
5.//Date: 23/4/25
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

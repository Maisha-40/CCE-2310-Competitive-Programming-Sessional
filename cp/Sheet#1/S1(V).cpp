1.// Problem name: V. Comparison  
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4.// Course teacher name: Mirza Raquib
5.//Date: 23/4/25#include<bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    char S;
    cin >> A >> S >> B;

    if (S == '<') {
        cout << ((A < B) ? "Right" : "Wrong") << endl;
    }
    else if (S == '>') {
        cout << ((A > B) ? "Right" : "Wrong") << endl;
    }
    else if (S == '=') {
        cout << ((A == B) ? "Right" : "Wrong") << endl;
    }
    else {
        cout << "Invalid operator. Use one of '<', '>', '='." << endl;
    }
}

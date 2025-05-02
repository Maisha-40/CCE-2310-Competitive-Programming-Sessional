#include<bits/stdc++.h>
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

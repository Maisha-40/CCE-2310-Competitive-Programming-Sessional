#include<bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    char S;

    cin >> A >> S >> B;

    switch(S) {
        case '+':
            cout << A + B << endl;
            break;
        case '-':
            cout << A - B << endl;
            break;
        case '*':
            cout << A * B << endl;
            break;
        case '/':
            if (B != 0) {
                cout << A / B << endl;
            } else {
                cout << "Division by zero is undefined." << endl;
            }
            break;
        default:
            cout << "Invalid operator. Use one of +, -, *, /." << endl;
    }

}

1.// Problem name: O. Calculator 
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4.// Course teacher name: Mirza Raquib
5.//Date: 23/4/25
#include<bits/stdc++.h>
using namespace std;
int main() {
    int A, B;
    char S;

    cin>> A >> S >> B;

    switch(S) {
        case '+':
            cout << A + B <<endl;
            break;
        case '-':
            cout << A - B <<endl;
            break;
        case '*':
            cout << A * B <<endl;
            break;
        case '/':
            if (B != 0) {
                cout<< A / B <<endl;
            } else {
                cout << "Division by zero is undefined." <<endl;
            }
            break;
        default:
            cout << "Invalid operator. Use one of +, -, *, /." <<endl;
    }

}

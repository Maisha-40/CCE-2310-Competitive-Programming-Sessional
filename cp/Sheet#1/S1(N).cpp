#include<bits/stdc++.h>
using namespace std;

int main()
{
    char X;
    cin >> X;

    if (islower(X)) {
        cout << char(X - 32) << endl;
    } else if (isupper(X)) {
        cout << char(X + 32) << endl;
    } else {
        cout << "Invalid input. Please enter an alphabet letter." << endl;
    }
}

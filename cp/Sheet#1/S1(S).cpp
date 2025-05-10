1.// Problem name: S. Interval 
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4.// Course teacher name: Mirza Raquib
5.//Date: 23/4/25#include<bits/stdc++.h>
using namespace std;

int main() {
    float X;
    cin >> X;

    if (X >= 0 && X <= 25) {
    cout << "Interval [0,25]" << endl;
    }
    else if (X > 25 && X <= 50) {
    cout << "Interval (25,50]" << endl;
    }
    else if (X > 50 && X <= 75) {
    cout << "Interval (50,75]" << endl;
    }
    else if (X > 75 && X <= 100) {
    cout << "Interval (75,100]" << endl;
    }
    else {
    cout << "Out of Intervals" << endl;
    }
}

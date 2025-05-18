1.// Problem name: C. Next Alphabet 
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4.// Course teacher name: Mirza Raquib
5.//Date: 23/4/25
#include<bits/stdc++.h>
using namespace std;

int main() {
    char C;
    cin >> C;
    char nextChar = (C == 'z') ? 'a' : C + 1;
    cout << nextChar << endl;
}


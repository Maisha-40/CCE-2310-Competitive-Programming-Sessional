1.// Problem name: V. PUM  
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4.// Course teacher name: Mirza Raquib
5.//Date: 23/4/25
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int count = 1;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << count << " ";
            count++;
        }
        cout <<"PUM"<<endl;
       count++;
    }
}

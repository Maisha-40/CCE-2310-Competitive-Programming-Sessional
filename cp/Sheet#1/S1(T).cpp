1.// Problem name: T. Sort Numbers  
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4.// Course teacher name: Mirza Raquib
5.//Date: 23/4/25
#include<bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    vector<int> nums = {A, B, C};
    sort(nums.begin(), nums.end());
    for (int num : nums) {
        cout << num << endl;
    }
    cout << endl;
    cout << A << endl;
    cout << B << endl;
    cout << C << endl;
}

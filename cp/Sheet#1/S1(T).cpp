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

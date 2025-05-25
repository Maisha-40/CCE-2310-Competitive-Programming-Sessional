1.// Problem name: C. Finding Minimums
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4.// Course teacher name: Mirza Raquib
5.//Date: 19/5/25
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> numbers(N);
    for (int &num : numbers) cin >> num;

    for (int i = 0; i < N; i += K)
        cout << *min_element(numbers.begin() + i, numbers.begin() + min(i + K, N)) << " ";

    return 0;
}

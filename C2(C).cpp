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

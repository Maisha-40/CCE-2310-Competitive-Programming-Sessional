#include<bits/stdc++.h>
using namespace std;

int main()
{
long long n;
cin >> n;
long long a[n];

for(long long j = 0; j < n; j++) {
        cin >> a[j];
    }

long long minn = a[0];
long long counter = 1;

for(long long k = 1; k < n; k++) {
if(a[k] == minn) {
counter++;
        }
else if(a[k] < minn) {
            minn = a[k];
            counter = 1;
        }
    }

    if(counter % 2 == 1) {
        cout << "Lucky" << endl;
    }
    else {
        cout << "Unlucky" << endl;
    }
}

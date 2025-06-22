1.// Problem name: J. Lucky Array
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4.// Course teacher name: Mirza Raquib
5.//Date: 16/6/25
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

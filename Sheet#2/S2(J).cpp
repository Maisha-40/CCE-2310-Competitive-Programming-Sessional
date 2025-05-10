#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
bool a[n + 1];
for(int i = 0;i <= n;i++){
a[i] = true;
}
for (int j = 2; j * j <= n; j++) {
if (a[j] == true) {
for (int k = j + j; k <= n; k += j) {
if (k % j==0){
a[k]=false;
}
}
}
}
for (int i = 2; i <= n; i++) {
if (a[i] == true) {
cout << i << endl;
}
return 0;
}
}

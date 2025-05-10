1.// Problem name: M. Capital or Small or Digit 
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4.// Course teacher name: Mirza Raquib
5.//Date: 23/4/25
#include<bits/stdc++.h>
using namespace std;

int main()
{
char chr;
cin>> chr;
if(chr>= 97 && chr<= 122)
{
cout <<"ALPHA"<< endl;
cout <<"IS SMALL"<< endl;
}
else if (chr >= 65 && chr <= 90)
{
 cout <<"ALPHA"<< endl;
cout <<"IS CAPITAL"<< endl;
}
else{
cout <<"IS DIGIT"<< endl;
}
}

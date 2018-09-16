#include<bits/stdc++.h>
using namespace std;

int main(void){
   long long a, b, x, y;
   cin >> a >> b >> x >> y;
   long long gcd = __gcd(x, y);
   x /= gcd, y /= gcd;
   long long tmp = min(a / x, b / y);
   cout << tmp;
}

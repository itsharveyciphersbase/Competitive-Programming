#include<bits/stdc++.h>

using namespace std;


long long modpow(long long base, long long exp, long long modulus) {
  base %= modulus;
  long long result = 1;
  while (exp > 0) {
    if (exp & 1) result = (result * base) % modulus;
    base = (base * base) % modulus;
    exp >>= 1;
  }
  return result;
}

int main(void){
  int testcases;
  scanf("%d", &testcases);
  while(testcases --){
    long long n, p;
    scanf("%lld %lld", &n, &p);
    int x = (int)modpow(n, p, 9LL);
    if(x)printf("%d\n", x);
    else puts("9");
  }
}

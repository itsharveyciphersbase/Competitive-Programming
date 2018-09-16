#include <bits/stdc++.h>

using namespace std;

int main(void){
   freopen("alan.in", "r", stdin);
   int testcases;
   scanf("%d", &testcases);
   while (testcases--) {
      int a, b, c;
      scanf("%d %d %d", &a, &b, &c);
      long long A = a, B = b, C = c;
      B = B * B * A, C = C * C * A;
      A = B + C;
      vector<long long> v {A, B, C};
      sort(v.begin(), v.end());
      printf("%lld %lld %lld\n", v[0], v[1], v[2]);
   }
}

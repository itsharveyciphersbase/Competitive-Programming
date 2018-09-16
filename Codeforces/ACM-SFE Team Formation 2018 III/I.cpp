#include <bits/stdc++.h>

using namespace std;
int main(void){
   freopen("descartes.in", "r", stdin);
   int testcases;
   scanf("%d", &testcases);
   while (testcases--) {
      int n, k;
      scanf("%d %d", &n, &k);
      long long tmp = (n - k);
      long long ans =  tmp * k + (tmp * (tmp - 1) / 2);
      printf("%lld\n", ans);
   }
}

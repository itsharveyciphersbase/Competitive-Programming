#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n, q;
    scanf("%d %d", &n, &q);
    vector<int> v (n, 0);
    for(int i = 0; i < n; ++i){
      scanf("%d", &v[i]);
    }
    for (int i = 0; i < q; i++) {
      int t, x, k;
      scanf("%d %d %d", &t, &x, &k);
      if(t == 1){
        v[x - 1] = k;
      }else{
        int kk = v[0], ans = 0;
        ans += (k == kk);
        for (int j = 1; j < x; j++) {
          kk ^= v[j];
          ans += (k == kk);
        }
        printf("%d\n", ans);
      }
    }
}

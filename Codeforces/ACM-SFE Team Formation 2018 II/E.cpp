#include <bits/stdc++.h>

using namespace std;

int cases = 1;

int main(void){
   freopen("sphere.in", "r", stdin);
   int testcases;
   scanf("%d", &testcases);
   while (testcases--) {
      printf("Case %d: ", cases++);
      int r, cnt = 0, q, x, y, z;
      scanf("%d %d", &r, &q);
      for(int i = 0; i < q; ++i){
         scanf("%d %d %d", &x, &y, &z);
         if(sqrt((long long)x * x + (long long)y * y + (long long)z * z) < r){
            cnt ++;
         }
      }
      printf("%d\n", cnt);
   }
}

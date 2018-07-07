#include <bits/stdc++.h>
using namespace std;

int main(void) {
   int testcases, n, cases = 1;
   scanf("%d", &testcases);
   while(testcases--){
      scanf("%d", &n);
      vector<int> v (n), v2 (n);
      for(int i = 0; i < n; ++i){
         scanf("%d", &v[i]);
         v2[i] = v[i];
      }
      bool done = false;
      while(!done){
         done = true;
         for(int i = 0; i < n - 2; ++i){
            if(v[i] > v[i + 2]){
               swap(v[i], v[i + 2]);
               done = false;
            }
         }
      }
      sort(v2.begin(), v2.end());
      printf("Case #%d: ", cases++);
      for(int i = 0; i < n; ++i){
         if(v2[i] != v[i]){
            printf("%d\n", i);
            break;
         }
         if(i == n - 1)
            puts("OK");
      }
   }
}

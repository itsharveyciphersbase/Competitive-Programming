#include <bits/stdc++.h>
using namespace std;


int main(void) {
   int testcases, n, k;
   scanf("%d", &testcases);
   while(testcases--){
      scanf("%d %d", &n, &k);
      vector<int> books;
      int zeroes = 0, tmp;
      for(int i = 0; i < n; ++i){
         scanf("%d", &tmp);
         if(tmp) books.push_back(tmp);
         else zeroes ++;
      }
      if(zeroes > k){
         puts("Impossible");
      }else if(n == k){
         puts("Richman");
      }else{
         long ans = 0;
         int mini = INT_MAX;
         for(int i = 0; i < books.size(); ++i){
            if(zeroes < k){
               ans += books[i];
               zeroes ++;
            }else {
               mini = min(mini, books[i] - 1);
            }
         }
         printf("%ld\n", ans + mini);
      }
   }
}

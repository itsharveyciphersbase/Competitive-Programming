#include <bits/stdc++.h>
using namespace std;

int arr[10];

int solve(int n){
   if(!n) return 1;
   int ans = 0;
   while(n){
      ans += arr[n % 10];
      n /= 10;
   }
   return ans;
}

int main(void) {
   arr[0] = arr[4] = arr[6] = arr[9] = 1;
   arr[8] = 2;
   int testcases, n, k;
   scanf("%d", &testcases);
   while(testcases--){
      scanf("%d %d", &n, &k);
      if(!k)
         printf("%d\n", n);
      else{
         int ans = solve(n), count = 1;
         while(ans > 1 && count < k){
            count ++;
            ans = solve(ans);
         }
         k -= count;
         if(k % 2){
            ans = !ans;
         }
         printf("%d\n", ans);
      }
   }
}

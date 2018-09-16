#include<bits/stdc++.h>
using namespace std;

int cases = 1;
int main(void){
   freopen("subsum.in", "r", stdin);
   int testcases;
   scanf("%d", &testcases);
   while(testcases--){
      int n;
      scanf("%d", &n);
      int arr[n];
      for(int i = 0; i < n; ++i){
         scanf("%d", &arr[i]);
         if(i)arr[i] += arr[i-1];
      }
      printf("Case %d:\n", cases++);
      int q, x, z;
      scanf("%d", &q);
      for(int i = 0; i < q; ++i){
         scanf("%d %d", &x, &z);
         if(x > 1)printf("%d\n", arr[z - 1] - arr[x - 2]);
         else printf("%d\n", arr[z - 1]);
      }
   }
}

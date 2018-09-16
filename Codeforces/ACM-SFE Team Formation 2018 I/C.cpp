#include<bits/stdc++.h>
using namespace std;

int arr[100001], n, m;

int cases = 1;
int main(void){
   freopen("pattern.in", "r", stdin);
   int testcases;
   scanf("%d", &testcases);
   while(testcases--){
      scanf("%d %d", &n, &m);
      for(int i = 0; i < m; ++i){
         scanf("%d", &arr[i]);
      }
      sort(arr, arr + m);
      int cnt = 0;
      for(int i = 0; i < m; ++i){
         if(arr[i] > n / 2)cnt++;
      }
      printf("Case %d: %d\n", cases++, cnt);
   }
}

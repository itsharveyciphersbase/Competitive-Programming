#include<bits/stdc++.h>
using namespace std;

int cases = 1, n, m;
pair<pair<long long,long long>, pair<long long,long long> > arr[1000001];

bool simu(int s){
   for(int i = 0; i < n; ++i){
      arr[i].first.second = (s - 1) * arr[i].second.second;
      arr[i].first.first = arr[i].first.second + arr[i].second.first;
   }
   sort(arr, arr + n);
   long long sum = 0;
   for(int i = 0; i < s; ++i){
      sum += arr[i].first.first;
   }
   return sum <= (long long)m;
}

int main(void){
   freopen("fouad.in", "r", stdin);
   int testcases;
   scanf("%d", &testcases);
   while(testcases--){
      scanf("%d %d", &n, &m);
      for(int i = 0; i < n; ++i){
         scanf("%lld", &arr[i].second.first);
      }
      for(int i = 0; i < n; ++i){
         scanf("%lld", &arr[i].second.second);
      }
      int s = -1, e = n + 1;
      int mid = (s + e) / 2;
      while(s + 1 < e){
         if(simu(mid)){
            s = mid;
         }else e = mid;
         mid = (s + e) / 2;
      }
      while(mid + 1 <= n && simu(mid + 1))mid++;
      while(mid > 0 && !simu(mid))mid--;
      printf("Case %d: %d\n", cases++, mid);
   }
}

#include<bits/stdc++.h>
using namespace std;

int main(void){
   int n, m, x;
   scanf("%d %d", &n, &m);
   vector<pair<int, int> > q;
   for(int i = 0; i < n; ++i){
      scanf("%d", &x);
      q.push_back(make_pair(x, 1));
   }
   for(int i = 0; i < m; ++i){
      scanf("%d", &x);
      q.push_back(make_pair(x, 2));
   }
   sort(q.begin(), q.end());
   long long ans = 0;
   int s = n + m - 1, mem = n + m - 1;
   while(s > -1){
      while(s > -1 && q[s].second != 2){
         s--;
      }
      if(s <= 0) break;
      mem = min(s - 1, mem);
      while(mem > -1 && q[mem].second != 1){
         mem--;
      }
      if(mem < 0) break;
      if(q[s].first >= q[mem].first){
         ans += q[mem].first;
         s --, mem --;
      }
   }
   cout << ans << endl;
}

#include<bits/stdc++.h>
using namespace std;

int cost[20], n;
vector<int> conect[20];

long long go(int x){
   long long sum = 0;
   set<int> vis;
   string ch = bitset<19> (x).to_string();
   reverse(ch.begin(), ch.end());
   for(int i = 0; i < n; ++i){
      if(ch[i] == '1'){
         sum += cost[i];
         vis.insert(i);
         for(int j = 0; j < conect[i].size(); ++j)
            vis.insert(conect[i][j]);
      }
   }
   for(int i = 0; i < n; ++i){
      if(vis.count(i) == 0){
         return LLONG_MAX;
      }
   }
   return sum;
}

int main(void){
   int k, x;
   scanf("%d", &n);
   for(int i = 0; i < n; ++i){
      scanf("%d", &cost[i]);
   }
   for(int i = 0; i < n; ++i){
      scanf("%d", &k);
      while(k --){
         scanf("%d", &x);
         conect[i].push_back(x - 1);
      }
   }
   long long ans = LLONG_MAX;
   for(int i = 1; i <= 262144 + 10; ++i){
      ans = min(go(i), ans);
   }
   cout << ans;
}

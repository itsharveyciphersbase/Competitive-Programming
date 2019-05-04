#include <bits/stdc++.h>
using namespace std;

int main(void) {
   freopen("revive.in", "r", stdin);
	int test, n;
	scanf("%d", &test);
	while(test--){
      stack<pair<int,int> > last;
      scanf("%d", &n);
      vector<int> arr (n), sz (n + 1);
      for(int i = 0; i < n; ++i){
         scanf("%d", &arr[i]);
      }
      for(int i = 1; i <= n; ++i){
         scanf("%d", &sz[i]);
      }
      vector<pair<int,int> > ans;
      last.push(make_pair(arr[0], sz[arr[0]] - 1));
      for(int i = 1; i < n; ++i){
         while(!last.empty() && last.top().second <= 0){
            last.pop();
         }
         if(last.empty() || last.top().second < sz[arr[i]])break;
         last.top().second -= sz[arr[i]];
         ans.push_back(make_pair(last.top().first, arr[i]));
         last.push(make_pair(arr[i], sz[arr[i]] - 1));
      }
      if(ans.size() == n - 1){
         for(int i = 1; i < n; ++i){
            printf("%d %d\n", ans[i - 1].first, ans[i - 1].second);
         }
      }else{
         puts("-1");
      }
	}
}

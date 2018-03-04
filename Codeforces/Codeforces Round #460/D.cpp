#include<bits/stdc++.h>
using namespace std;

char ss[300001];
vector<int> graph[300001];
int vis[300001], arr[26], path[300001], in[300001], out[300001];
int maxi = 0;

void dfs(int i){
  // cout << i << "way ";
  if(path[i] == 1)
    maxi = -1;//, cout << i << "\n";
  if(maxi == -1)return;
  vis[i] = 1;
  arr[ss[i - 1] - 'a']++;
  // cout << arr[ss[i - 1] - 'a'] << "\n";
  maxi = max(arr[ss[i - 1] - 'a'], maxi);
  for(int s : graph[i]){
    path[i] = 1;
    dfs(s);
    path[i] = 0;
    if(maxi == -1)return;
  }
  arr[ss[i - 1] - 'a']--;
}

int main(void){
  int n, m, x, z;
  scanf("%d %d", &n, &m);
  scanf("%s", ss);
  for(int i = 0; i < m; ++i){
    scanf("%d %d", &x, &z);
    graph[x].push_back(z);
    in[z]++;
    out[x]++;
  }
  std::vector<pair < pair<int, int> , int> > v;
  for(int i = 1; i <= n; ++i){
    v.push_back(make_pair(make_pair(out[i], in[i]), i));
  }
  sort(v.begin(), v.end());
  for(auto vv : v){
    int i = vv.second;
    if(!vis[i]){
      memset(arr, 0, sizeof arr);
      dfs(i);
      if(maxi == -1){
        puts("-1");
        return 0;
      }
    }
  }
  printf("%d\n", maxi);
}

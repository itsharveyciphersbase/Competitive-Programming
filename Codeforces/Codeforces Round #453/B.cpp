#include<bits/stdc++.h>

using namespace std;
vector<int> graph[10001];
int vis[10001], color[10001];

int main(void){
  int n, op = 0, x;
  cin >> n;
  for(int i = 2; i <= n; ++i){
    cin >> x;
    graph[i].push_back(x);
    graph[x].push_back(i);
  }
  for(int i = 1; i <= n; ++i){
    cin >> color[i];
  }
  queue<pair<int,int>> k;
  k.push(make_pair(1, -1));
  vis[1] = 1;
  while(!k.empty()){
    pair<int,int> s = k.front();
    k.pop();
    if(color[s.first] != s.second){
      op++;
      s.second = color[s.first];
    }
    for(int ii : graph[s.first]){
      if(!vis[ii]){
        vis[ii] = 1;
        k.push(make_pair(ii, s.second));
      }
    }
  }
  cout << op;
}

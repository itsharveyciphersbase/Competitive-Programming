#include<bits/stdc++.h>

using namespace std;
int n, is, js, ie, je;
bool found = false;
bool valid(int x, int z){
  return x > -1 && x < n && z > -1 && z < n;
}
int vis[201][201];
string arr[] = {"UL", "UR", "R", "LR", "LL", "L"};
int dx [] = {-2, -2, 0, 2, 2, 0};
int dz [] = {-1, 1, 2, 1, -1, -2};

int main (void){
  scanf("%d %d %d %d %d", &n, &is, &js, &ie, &je);
  queue<pair<vector<int>, pair<int,int> > > q;
  q.push(make_pair(vector<int> (), make_pair(is, js)));
  while(!found && !q.empty()){
      auto m  = q.front();
      q.pop();
      for(int j = 0; j < 6; ++j){
        if(valid(m.second.first + dx[j], m.second.second + dz[j])
          && !vis[m.second.first + dx[j]][m.second.second + dz[j]]){
          vis[m.second.first + dx[j]][m.second.second + dz[j]] = 1;
          auto n = m;
          n.second = make_pair(m.second.first + dx[j], m.second.second + dz[j]);
          n.first.push_back(j);
          q.push(n);
          if(ie == n.second.first && je == n.second.second){
            found = 1;
            break;
          }
        }
      }
  }
    while(!q.empty() && !(q.front().second.first == ie && q.front().second.second == je)){
      q.pop();
    }
    if(q.empty()){
        puts("Impossible");
        return 0;
    }
    printf("%d\n", q.front().first.size());
    for(int s : q.front().first)
      cout << arr[s] << " ";
}

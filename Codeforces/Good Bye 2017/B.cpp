#include<bits/stdc++.h>

using namespace std;
int sx, sz, ex, ez, n, m;
char grid[51][51];
string in;
vector<int> v = {0, 1, 2, 3};

int valid(int i, int j){
  return i >= 0 && i < n && j >= 0 && j < m && grid[i][j] != '#';
}

bool go(int i, int j, int id){
  if(i == ex && j == ez){
    return 1;
  }
  if(id == in.size()){
    return 0;
  }
  int ins = in[id] - '0';
  if(v[ins] == 0 && valid(i - 1, j)){
    return go(i - 1, j, id + 1);
  }
  if(v[ins] == 1 && valid(i + 1, j)){
    return go(i + 1, j, id + 1);
  }
  if(v[ins] == 2 && valid(i, j - 1)){
    return go(i, j - 1, id + 1);
  }
  if(v[ins] == 3 && valid(i, j + 1)){
    return go(i, j + 1, id + 1);
  }
  return 0;
}

int main(void){
  cin >> n >> m;
  for(int i = 0; i < n; ++i){
    cin >> grid[i];
    for(int j = 0; j < m; ++j){
      if(grid[i][j] == 'S'){
        sx = i, sz = j;
      }
      if(grid[i][j] == 'E'){
        ex = i, ez = j;
      }
    }
  }
  cin >> in;
  int ans = 0;
  do {
    ans += go(sx, sz, 0);
  } while(next_permutation(v.begin(), v.end()));
  cout << ans << "\n";
}

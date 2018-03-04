#include<bits/stdc++.h>
using namespace std;

string arr[2000];

int main(void){
  int n, m, k, ans = 0;
  cin >> n >> m >> k;
  for(int i = 0; i < n; ++i){
    cin >> arr[i];
  }
  for(int i = 0; i < n; ++i){
    int c = 0;
    for(int j = 0; j < m; ++j){
      if(arr[i][j] == '.') c ++;
      else c = 0;
      if(c >= k)ans ++;
    }
  }
  for(int j = 0; j < m; ++j){
    int c = 0;
    for(int i = 0; i < n; ++i){
      if(arr[i][j] == '.') c ++;
      else c = 0;
      if(c >= k)ans ++;
    }
  }
  cout << ans << "\n";
}

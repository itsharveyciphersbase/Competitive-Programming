#include<bits/stdc++.h>

using namespace std;

map<int,int> rep;

int main(void){
  int n, x;
  cin >> n;
  for(int i = 0; i < n; ++i){
      cin >> x;
      rep[x]++;
  }
  int ans = 0;
  for(auto s : rep){
      if(s.first > s.second)
        ans += s.second;
      else ans += (s.second - s.first);
  }
  cout << ans;
}

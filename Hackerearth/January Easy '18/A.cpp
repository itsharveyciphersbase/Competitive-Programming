#include<bits/stdc++.h>

using namespace std;

unordered_map<int, int> mem;

int main(void){
  int n, x;
  cin >> n;
  for(int i = 0; i < n; ++i)
    cin >> x, mem[x]++;
  long long ans = 0;
  for(auto m : mem){
    ans += (long long)m.second * (m.second - 1) / 2;
  }
  cout << ans;
}

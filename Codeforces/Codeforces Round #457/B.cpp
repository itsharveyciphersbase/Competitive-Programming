#include<bits/stdc++.h>
using namespace std;

int main(void){
  long long n;
  int m;
  cin >> n >> m;
  if(__builtin_popcount (n) > m){
    puts("No");
    return 0;
  }else puts("Yes");
  string bits = bitset<65> (n).to_string();
  priority_queue<long long> ans;
  long long ii = 0;
  for(int i = 64; i > -1; --i, ++ii){
    if(bits[i] == '1')
      ans.push(ii);
  }
  // cout << ans.size()
  while(ans.size() < m){
    long long tmp = ans.top(); ans.pop();
    ans.push(tmp - 1);
    ans.push(tmp - 1);
  }
  while(!ans.empty()){
    cout << ans.top() << " ";
    ans.pop();
  }
  cout << "\n";
}

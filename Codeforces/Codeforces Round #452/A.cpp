#include<bits/stdc++.h>

using namespace std;

int main(void){
  int n, one = 0, two = 0, x;
  cin >> n;
  for(int i = 0; i < n; ++i){
    cin >> x;
    if(x == 1)
      one++;
    else two ++;
  }
  int ans = min(two, one);
  two -= ans;
  one -= ans;
  cout << ans + one / 3;
}

#include<bits/stdc++.h>

using namespace std;

int pre[100001], val[100001], prime[100001];

int main(void){
  for(int i = 2; i < 100001; ++i){
    for(int j = 2 * i; !prime[i] && j < 100001; j+=i){
      prime[j] = 1;
    }
  }
  for(int i = 3; i < 100001; ++i){
    val[i] = (!prime[i] && !prime[int((i + 1) / 2)]);
    pre[i] = val[i] + pre[i - 1];
  }
  int n, l, r;
  cin >> n;
  for(int i = 0; i < n; ++i){
    cin >> l >> r;
    cout << pre[r] - pre[l - 1] << "\n";
  }
}

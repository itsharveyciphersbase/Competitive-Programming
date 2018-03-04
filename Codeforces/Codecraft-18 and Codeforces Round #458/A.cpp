#include<bits/stdc++.h>
using namespace std;

set<int> perfect;

int main(void){
  for(int i = 0; i <= 1000; ++i){
    perfect.insert(i * i);
  }
  int maxi = INT_MIN, n, x;
  cin >> n;
  for(int i = 0; i < n; ++i){
    cin >> x;
    if(!perfect.count(x)){
      maxi = max(maxi, x);
    }
  }
  cout << maxi;
}

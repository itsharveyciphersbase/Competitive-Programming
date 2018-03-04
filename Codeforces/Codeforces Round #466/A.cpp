#include<bits/stdc++.h>
using namespace std;

int main(void){
  int n, d;
  cin >> n >> d;
  vector<int> v (n);
  for(int i = 0; i < n; ++i){
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  int maxi = 0;
  for(int i = 0; i < n; ++i){
    for(int j = i + 1; j < n; ++j){
      if(v[j] - v[i] <= d)
        maxi = max(maxi, j - i + 1);
    }
  }
  cout << min(n - maxi, n - 1);
}

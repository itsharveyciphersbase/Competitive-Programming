#include<bits/stdc++.h>

using namespace std;

int arr[5001][101];

bool chk(int i, int j, int l){
  int rem = i;
  while(i < j){
    if(arr[l][i++])
      return false;
  }
  while(rem < j){
    arr[l][rem++]++;
  }
  return true;
}

int main(void){
  int n;
  cin >> n;
  int ans = 0;
  vector<pair<int,int> > intervals;
  for(int i = 0; i <= n; ++i){
    for(int j = n - i; j > 0; --j){
      intervals.push_back(make_pair(i, i + j));
    }
  }
  int maxi = 0;
  for(auto s : intervals){
    for(int i = 1; i <= 5000; ++i){
      maxi = max(maxi, i);
      if(chk(s.first,s.second,i))
        break;
    }
  }
  cout << maxi << "\n";
}

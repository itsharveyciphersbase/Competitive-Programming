#include<bits/stdc++.h>

using namespace std;
set<int> k;
int arr[101];
int main(void){
  int n;
  cin >> n;
  for(int i = 0; i < n; ++i)
    cin >> arr[i];
  for(int i = 0; i < n; ++i)
    for(int j = i + 1; j < n; ++j)
      k.insert(arr[i] + arr[j]);
  cout << k.size();
}

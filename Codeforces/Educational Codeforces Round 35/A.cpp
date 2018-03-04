#include<bits/stdc++.h>

using namespace std;

int arr[1000001];

int main(void){
  int n;
  cin >> n;
  int mini = INT_MAX;
  for(int i = 0; i < n; ++i)
    cin >> arr[i], mini = min(mini, arr[i]);
  int ans = INT_MAX, count = 10000001;
  for(int i = 0; i < n; ++i)
    if(arr[i] == mini)
      ans = min(ans, count), count = 1;
    else count++;
  cout << ans << "\n";
}

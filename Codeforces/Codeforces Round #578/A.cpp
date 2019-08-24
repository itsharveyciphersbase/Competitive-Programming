#include <bits/stdc++.h>
using namespace std;

int arr[10];
int main(void){
  int n;
  cin >> n;
  string events;
  cin >> events;
  for(int i = 0; i < n; ++i){
    if(events[i] == 'L'){
      for (int j = 0; j < 10; j++) {
        if(!arr[j]){
          arr[j] = 1;
          break;
        }
      }
    }else if(events[i] == 'R'){
      for (int j = 9; j > -1; j--) {
        if(!arr[j]){
          arr[j] = 1;
          break;
        }
      }
    }else{
      arr[events[i] - '0']--;
    }
  }
  for (int i = 0; i < 10; i++) {
    cout << arr[i];
  }
}

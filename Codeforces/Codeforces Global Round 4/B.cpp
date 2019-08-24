#include <bits/stdc++.h>
using namespace std;

int main(void){
  string input;
  cin >> input;
  long long Ws = 0, ans = 0;
  for(int i = 0; i < input.size() - 1; ++i){
    if(input[i] == 'v' && input[i + 1] == 'v'){
      Ws ++;
    }
  }
  for(int i = 0, Wsbefore = 0; i < input.size() - 1; ++i){
    if(input[i] == 'o'){
      ans += ((long long)Ws - Wsbefore) * (Wsbefore);
    }
    if(input[i] == 'v' && input[i + 1] == 'v'){
      Wsbefore ++;
    }
  }
  cout << ans;
}

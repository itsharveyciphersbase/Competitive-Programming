#include<bits/stdc++.h>

using namespace std;

int val[501], X[501], Y[501], Z[501];

int main(void){
  int n;
  cin >> n;
  for(int i = 1; i < n; ++i){
    cin >> X[i] >> Y[i] >> Z[i];
  }
  for(int i = 1; i <= n; ++i){
    long t = Y[i] + X[i];
    for(int j = i + 1; j < n; ++j){
      if(t > Y[j]){
        t -= Y[j];
        if(t % Z[j]){
          t /= Z[j];
          t++;
          t *= Z[j];
        }
        t += Y[j];
      }else{
        t = Y[j];
      }
      t += X[j];
    }
    cout << t << "\n";
  }
}

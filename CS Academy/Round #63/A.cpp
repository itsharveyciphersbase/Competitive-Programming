#include <bits/stdc++.h>

using namespace std;
int A[1001], B[1001];
int main(void){
  int a, b;
  cin >> a >> b;
  for(int i = 0;i < a; ++i){
    cin >> A[i];
  }
  for(int i = 0;i < b; ++i){
    cin >> B[i];
  }
  int cn = 0;
  for(int k = 0; k < b - a + 1; ++k){
    bool tr = true;
    for(int i = 0;i < a && i + k < b; ++i){
      tr &= (A[i] + B[i + k] == 1);
    }
    if(tr)cn++;
  }
  cout << cn << "\n";
}

#include<bits/stdc++.h>

using namespace std;


int main(void){
  int n, a, b;
  cin >> n >> a >> b;
  int mini = 0;
  for(int i = 1; i < n; ++i){
    int sol = min(a / i, b / (n - i));
    mini = max(sol, mini);
  }
  cout << mini << "\n";
}

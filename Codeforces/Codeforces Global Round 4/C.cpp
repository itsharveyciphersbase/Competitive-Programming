#include <bits/stdc++.h>
using namespace std;

int MOD = 998244353;

long long powerOfTwo(int power){
  if(power == 1){
    return 2;
  }else if(power == 0){
    return 1;
  }
  return powerOfTwo(power / 2) * powerOfTwo(power / 2 + power % 2) % MOD;
}

int main(void){
  int w, h;
  scanf("%d %d", &w, &h);
  cout << (powerOfTwo(w + h) % MOD);
}

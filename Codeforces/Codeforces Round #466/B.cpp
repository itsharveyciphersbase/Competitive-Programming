#include<bits/stdc++.h>
using namespace std;

int main(void){
  long long n, k, a, b;
  cin >> n >> k >> a >> b;
  long long cost = 0;
  while(n != 1){
    if(n < k || k == 1){
      long long tmp = n - 1;
      cost += tmp * a;
      n -= tmp;
    }else if(n % k){
      long long tmp = n % k;
      cost += tmp * a;
      n -= tmp;
    }else{
      long long tmp = n / k;
      cost += min(b, (n - tmp) * a);
      n = tmp;
    }
  }
  cout << cost;
}

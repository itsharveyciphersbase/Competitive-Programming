#include<bits/stdc++.h>

using namespace std;

int sumOfDigitsOfN(int n){
  int sum = 0;
  while(n){
    sum += (n % 10);
    n /= 10;
  }
  return sum;
}

int main(void){
  int N, A, B;
  cin >> N >> A >> B;
  long ans = 0;
  for(int i = 1; i <= N; ++i){
    if(sumOfDigitsOfN(i) >= A && sumOfDigitsOfN(i) <= B)
      ans += i;
  }
  cout << ans;
}

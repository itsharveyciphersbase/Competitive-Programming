#include <bits/stdc++.h>

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
  int testcases, n, x, sumOfDigits;
  scanf("%d", &testcases);
  while(testcases--){
    sumOfDigits = 0;
    scanf("%d", &n);
    while(n --){
      scanf("%d", &x);
      sumOfDigits += sumOfDigitsOfN(x);
    }
    if(sumOfDigits % 3)puts("No");
    else puts("Yes");
  }
}

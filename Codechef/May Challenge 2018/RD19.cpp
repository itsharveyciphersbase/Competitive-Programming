#include<bits/stdc++.h>
using namespace std;

int arr[1001];

int main(void){
   int testcases;
   scanf("%d", &testcases);
   while(testcases--){
      int n;
      scanf("%d", &n);
      for(int i = 0; i < n; ++i){
         scanf("%d", &arr[i]);
      }
      int GCD = __gcd(arr[0], arr[1]);
      for(int i = 2; i < n; ++i){
         GCD = __gcd(GCD, arr[i]);
      }
      if(GCD == 1){
         puts("0");
      }else puts("-1");
   }
}

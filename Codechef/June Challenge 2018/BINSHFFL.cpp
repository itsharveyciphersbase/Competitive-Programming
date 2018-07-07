#include<bits/stdc++.h>
using namespace std;

int main(void){
   int testcases;
   scanf("%d", &testcases);
   while(testcases--){
      long long A, B;
      scanf("%lld %lld", &A, &B);
      int count = 0;
      while(__builtin_popcount(B - 1) != __builtin_popcount(A)){
         A ++, count++, B--;
      }
      printf("%d\n", count + 1);
   }
}

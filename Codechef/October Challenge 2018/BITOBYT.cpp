#include<bits/stdc++.h>

using namespace std;

long long bit[1601], nibble[1601], byte[1601];

int next(int x){
   return max(1, (x + 1) % 27);
}

int main(void){
   bit[0] = 1;
   for(int i = 1, j = 1; i <= 1601; ++i, j = next(j)){
      if(j == 2 || j == 10 || j == 26){
         if(j == 2)nibble[i] = bit[i - 1];
         if(j == 10)byte[i] = nibble[i - 1];
         if(j == 26)bit[i] = byte[i - 1] * 2;
      }else bit[i] = bit[i - 1], nibble[i] = nibble[i - 1], byte[i] = byte[i - 1];
   }
   int testcases, n;
   scanf("%d", &testcases);
   while (testcases--) {
      scanf("%d", &n);
      printf("%lld %lld %lld\n", bit[n - 1], nibble[n - 1], byte[n - 1]);
   }
}

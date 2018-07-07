#include<bits/stdc++.h>
using namespace std;

long long co(long long z){
   return z * z * z;
}

int main(void){
   long long sum = 0;
   int n;
   scanf("%d", &n);
   long long m = 0;
   for(int i = 0; i < n; ++i){
      scanf("%ld", &m);
      sum += m * m * m;
   }
   m = cbrt(sum);
   while(co(m) > sum)m--;
   while(co(m + 1) <= sum)m++;
   printf("%d\n", (int)m);
}

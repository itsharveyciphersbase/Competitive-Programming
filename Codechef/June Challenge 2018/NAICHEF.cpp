#include<bits/stdc++.h>
using namespace std;

int main(void){
   int testcases;
   scanf("%d", &testcases);
   while(testcases--){
      int n, a, b, x;
      scanf("%d %d %d", &n, &a, &b);
      double first = 0, second = 0;
      for(int i = 0; i < n; ++i){
         scanf("%d", &x);
         if(x == a) first ++;
         if(x == b) second ++;
      }
      first /= n;
      second /= n;
      printf("%f\n", first * second);
   }
}

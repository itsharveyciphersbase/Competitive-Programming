#include<bits/stdc++.h>
using namespace std;

int cases = 1;
int main(void){
   // freopen("pizzas.in", "r", stdin);
   int testcases;
   scanf("%d", &testcases);
   while(testcases--){
      int n, x, z = 0;
      scanf("%d", &n);
      for(int i = 0; i < n; ++i){
         scanf("%d", &x);
         z += x;
      }
      printf("Case %d: %d\n", cases++, z);
   }
}

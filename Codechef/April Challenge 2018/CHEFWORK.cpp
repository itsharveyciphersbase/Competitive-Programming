#include<bits/stdc++.h>
using namespace std;

int cost[1001];
int main(void){
   int n, tmp, a = 200000, b = 200000, c = 200000;
   scanf("%d", &n);
   for(int i = 0; i < n; ++i){
      scanf("%d", &cost[i]);
   }
   for(int i = 0; i < n; ++i){
      scanf("%d", &tmp);
      if(tmp == 1)
         a = min(a, cost[i]);
      else if(tmp == 2)
         b = min(b, cost[i]);
      else
         c = min(c, cost[i]);
   }
   printf("%d\n", min(a + b, c));
}

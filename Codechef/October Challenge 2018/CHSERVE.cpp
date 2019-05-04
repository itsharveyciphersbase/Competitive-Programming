#include<bits/stdc++.h>

using namespace std;

int main(void){
   int testcases;
   scanf("%d", &testcases);
   while (testcases--) {
      int p1, p2, k;
      scanf("%d %d %d", &p1, &p2, &k);
      int total_points = (p1 + p2);
      if((total_points / k) % 2)puts("COOK");
      else puts("CHEF");
   }
}

#include<bits/stdc++.h>
using namespace std;

int main(void){
   int testcases;
   scanf("%d", &testcases);
   while (testcases--) {
      int n, x, s;
      scanf("%d %d %d", &n, &x, &s);
      int z, zz;
      for(int i = 0; i < s; ++i){
         scanf("%d %d", &z, &zz);
         if(z == x)x = zz;
         else if(zz == x)x = z;
      }
      printf("%d\n", x);
   }
}

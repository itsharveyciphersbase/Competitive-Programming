#include<bits/stdc++.h>
using namespace std;

int co(int x){
   int ss = 0;
   while(x > 0){
      ss += x % 10;
      x /= 10;
   }
   return ss;
}


int main(void){
   int test;
   scanf("%d", &test);
   while(test--){
      map <int,int> s;
      int A, B, C, mini = INT_MAX;
      scanf("%d %d %d", &A, &B, &C);
      for(int i = A; i <= B; ++i){
         int z = abs(co(i) - co(C));
         if(s.count(z) == 0){
            s[z] = i;
            mini = min(z, mini);
         }
      }
      printf("%d\n", s[mini]);
   }
}

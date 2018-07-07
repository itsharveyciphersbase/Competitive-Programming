#include<bits/stdc++.h>
using namespace std;

long co(long z){
   long first = z * (z + 1), second = z * (z - 1) / 2;
   return first + second;
}

int main(void){
   int test;
   scanf("%d", &test);
   while(test--){
      int in;
      scanf("%d", &in);
      int s = -1, e = 50000;
      int m = (s + e) / 2;
      while(s + 1 < e){
         if(co(m) > in){
            e = m;
         }else s = m;
         m = (s + e) / 2;
      }
      while(co(m) > in)m--;
      while(co(m + 1) <= in)m++;
      printf("%d\n", m);
   }
}

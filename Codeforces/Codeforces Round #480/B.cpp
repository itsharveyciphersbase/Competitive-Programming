#include<bits/stdc++.h>
using namespace std;

int main(void){
   int n, k;
   cin >> n >> k;
   if(k % 2 && k != (n - 2)){
      puts("NO");
   }else{
      puts("YES");
      int mem = 0;
      if(k % 2 == 0){
         mem = k / 2 + k % 2;
         k = mem;
      }
      for(int i = 0; i < n; ++i){
         putchar('.');
      }
      puts("");
      for(int i = 0; i < 2; ++i){
         putchar('.');
         for(int j = 2; j < n; ++j){
            if(k){
               k --;
               putchar('#');
            }else putchar('.');
         }
         putchar('.');
         puts("");
         k = mem;
         mem = 0;
      }
      for(int i = 0; i < n; ++i){
         putchar('.');
      }
      puts("");
   }
}

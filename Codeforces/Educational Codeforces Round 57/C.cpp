#include<bits/stdc++.h>
using namespace std;

map<int, int> mem;
int main(void){
   for(int i = 3; i <= 360; ++i){
      for(int j = 1; j <= i - 2; ++j){
         if(mem[180 * j / i] == 0 && (180 * j) % (i) == 0)
            mem[180 * j / i] = i;
      }
   }
   int test;
   int tmp;
   cin >> test;
   while(test --){
      cin >> tmp;
      cout << mem[tmp] << "\n";
   }
}

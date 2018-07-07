#include<bits/stdc++.h>
using namespace std;

int main(void){
   string in;
   cin >> in;
   int p = 0, l = 0;
   for(int i = 0; i < in.size(); ++i){
      if(in[i] == 'o'){
         p ++;
      }else{
         l ++;
      }
   }
   if(!p || l % p == 0)puts("YES");
   else puts("NO");
}

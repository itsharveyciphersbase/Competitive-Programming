#include <bits/stdc++.h>
using namespace std;

int main(void){
   string in, out = "";
   cin >> in;
   int i = 0, j = in.size() - 1;
   if(in.size() % 2){
      while(j > i){
         out = in[i] + out;
         i++;
         out = in[j] + out;
         j--;
      }
      out = in[i] + out;
   }else{
      while(j > i){
         out = in[j] + out;
         j--;
         out = in[i] + out;
         i++;
      }
   }
   cout << out;
}

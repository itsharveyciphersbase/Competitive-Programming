#include <bits/stdc++.h>

using namespace std;

int main(void){
   string in;
   cin >> in;
   int n = in.size();
   in = in + in;
   int maxi = 1;
   for(int i = 0; i < n; ++i){
      int cur = 1;
      while(i + 1 < in.size() && in[i + 1] != in[i] && cur < n){
         cur ++;
         i ++;
      }
      maxi = max(maxi, cur);
   }
   cout << maxi << endl;
}

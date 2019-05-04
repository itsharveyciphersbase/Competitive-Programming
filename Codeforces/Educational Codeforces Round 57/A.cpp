#include<bits/stdc++.h>
using namespace std;

int main(void){
   int test;
   cin >> test;
   while(test--){
      int n, m;
      cin >> n >> m;
      bool done = false;
      for(int i = n; i <= m && !done; ++i){
         for(int j = 2; j * i <= m && !done; ++j){
            cout << i << " " << i *j << "\n";
            done = true;
            break;
         }
      }
   }
}

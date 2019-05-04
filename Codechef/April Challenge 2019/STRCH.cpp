#include<bits/stdc++.h>
using namespace std;

int main(void){
   int testcases, n;
   scanf("%d", &testcases);
   while(testcases--){
      long ans = 0;
      string in;
      char s;
      cin >> n >> in >> s;
      vector<int> pos;
      for (int i = 0; i < n; i++) {
         if(in[i] == s){
            pos.push_back(i);
         }
      }
      for(int i = 0; i < pos.size(); ++i){
         long UpUntil = n;
         if(i + 1 < pos.size())UpUntil = pos[i + 1];
         ans += (1 + (pos[i]) + max(0L, (UpUntil - pos[i] - 1)) + ((pos[i]) *  max(0L, (UpUntil - pos[i] - 1))));
      }
      cout << ans << endl;
   }
}

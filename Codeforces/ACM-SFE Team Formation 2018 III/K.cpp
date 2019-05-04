#include <bits/stdc++.h>

using namespace std;

set<string> tmp[27];
bool vowel(char x){
   return x == 'a' || x == 'u' || x == 'o' || x == 'i' || x == 'e';
}

int main(void){
   // freopen("vowely.in", "r", stdin);
   int testcases;
   scanf("%d", &testcases);
   while (testcases--) {
      for(int i = 0; i < 27; ++i){
         tmp[i].clear();
      }
      int n;
      scanf("%d", &n);
      char in[30];
      long long ans = 0;
      set<string> adds;
      for(int i = 0; i < n; ++i){
         scanf("%s", in);
         int vows = 0;
         string s = "";
         for(int j = 0; in[j] >= 'a' && in[j] <= 'z' && j < sizeof in; ++j){
            vows += vowel(in[j]);
            s += in[j];
         }
         if(tmp[vows].count(s) == 0)tmp[vows].insert(s);
         else adds.insert(s);
      }
      for(int i = 0; i < 27; ++i){
         ans += ((long long)tmp[i].size() * (tmp[i].size() - 1LL)) / 2;
      }
      printf("%lld\n", ans + adds.size());
   }
}

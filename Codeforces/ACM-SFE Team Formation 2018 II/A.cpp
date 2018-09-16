#include <bits/stdc++.h>

using namespace std;

int cases = 1;

int main(void){
   freopen("coloring.in", "r", stdin);
   int testcases;
   scanf("%d", &testcases);
   while (testcases--) {
      printf("Case %d: ", cases++);
      string in;
      cin >> in;
      int k;
      scanf("%d", &k);
      int i = 0, j = in.size() - 1;
      while(j > i){
         if(in[i] != in[j])k --;
         i ++, j --;
      }
      if(k > -1)puts("YES");
      else puts("NO");
   }
}

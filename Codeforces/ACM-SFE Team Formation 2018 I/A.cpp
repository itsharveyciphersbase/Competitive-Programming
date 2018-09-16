#include<bits/stdc++.h>
using namespace std;

int cases = 1;
int main(void){
   freopen("palindrome.in", "r", stdin);
   int testcases;
   scanf("%d", &testcases);
   while(testcases--){
      int n, m;
      scanf("%d %d", &n, &m);
      string in;
      cin >> in;
      int s = 0, e = n - m, ans = 1;
      while(e - s >= m){
         // cout << e << " " << s << endl;
         for(int i = 0; i < m; ++i){
            if(in[s + i] != in[e + i])ans = 0;
         }
         s += m, e -= m;
      }
      printf("Case %d: ", cases++);
      if(ans)puts("Yes");
      else puts("No");
   }
}

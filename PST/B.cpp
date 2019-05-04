#include <bits/stdc++.h>
using namespace std;

char A[1000001], B[1000001];

int main(void) {
   int testcases;
   long n;
   scanf("%d", &testcases);
   while(testcases--){
      scanf("%ld\n", &n);
      scanf("%s", A);
      scanf("%s", B);
      vector<pair<int,int> > p;
      int s = -1, e = -1;
      for(int i = 0; i < n; ++i){
         if(A[i] != B[i]){
            if(s == -1){
               s = e = i;
            }else e = i;
         }else{
            if(s != -1){
               p.push_back(make_pair(s, e));
               s = e = -1;
            }
         }
      }
      if(s != -1){
         p.push_back(make_pair(s, e));
         s = e = -1;
      }
      if(p.size() == 1){
         if(p[0].first == 0 && p[0].second == n - 1)printf("%ld\n", (n - 1) * 2);
         else printf("%ld\n", (long)2 * ((p[0].second - p[0].first) + (n - p[0].second - 1) + (p[0].first)));
      }else if(p.size() == 2){
         puts("6");
      }else if(p.size() == 0){
         printf("%ld\n", n * (n + 1) / 2);
      }else{
         puts("0");
      }
   }
}

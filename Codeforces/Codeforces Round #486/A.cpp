#include<bits/stdc++.h>
using namespace std;

int main(void){
   int n, k, x;
   cin >> n >> k;
   map<int, int> sk;
   for(int i = 0;i < n; ++i){
      cin >> x;
      sk[x] = i + 1;
   }
   if(sk.size()>=k){
      puts("YES");
      int ii = 1;
      for(auto i : sk){
         printf("%d ", i.second);
         ii ++;
         if(ii > k)break;
      }
   }else puts("NO");
}

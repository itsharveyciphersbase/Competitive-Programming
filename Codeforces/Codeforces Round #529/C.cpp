#include<bits/stdc++.h>
using namespace std;

int p[31], val[31];
int main(void){
   int n, k, cnt = 0, maxi = INT_MIN;
   cin >> n >> k;
   val[0] = 1;
   for(int i = 1; i < 31; ++i) val[i] = val[i - 1] * 2;
   for(int i = 30; i > -1 && n; --i){
      if(n >= val[i]) p[i] = 1, n -= val[i], cnt ++, maxi =  max(i, maxi);
   }
   while(cnt < k && maxi > 0){
      if(p[maxi]) p[maxi] --, p[maxi - 1] += 2, cnt ++;
      else maxi --;
   }
   if(cnt != k){
      puts("NO");
   }else{
      puts("YES");
      for(int i = 0; i < 31; ++i){
         for(int j = 0; j < p[i]; ++j){
            cout << val[i] << " ";
         }
      }
   }
}

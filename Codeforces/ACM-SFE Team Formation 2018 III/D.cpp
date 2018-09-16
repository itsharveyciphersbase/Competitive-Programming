#include <bits/stdc++.h>

using namespace std;

int a, b, c, d;

bool ifupper(char x){
   return x >= 'A' && x <= 'Z';
}

bool iflower(char x){
   return x >='a' && x <='z';
}

int calc(char x, char y){
   if(x == y)return 0;
   int mini = INT_MAX;
   if(ifupper(x) && ifupper(y)){
      mini = min(mini, b); // any upper to any upper
      mini = min(mini, d + a + c); // upper to lower - any lower to any lower - lower to upper
   }else if(iflower(x) && ifupper(y)){
      if(x - 'a' == y - 'A') {
         mini = min(mini, c);//lower to upper
      }else{
         mini = min(mini, a + c); // any lower to any lower - lower to upper
         mini = min(mini, c + b); // lower to upper - any upper to any upper
      }
   }else if(iflower(y) && ifupper(x)){
      if(x - 'A' == y - 'a') {
         mini = min(mini, d);//upper to lower
      }else {
         mini = min(mini, b + d); // any upper to any upper - upper to lower
         mini = min(mini, d + a); // upper to lower - any lower to any lower
      }
   }else if(iflower(x) && iflower(y)){
      mini = min(mini, a); // any lower to any lower;
      mini = min(mini, c + b + d); // lower to upper - any upper to any upper - upper to lower
   }
   return mini;
}

int main(void){
   freopen("donald.in", "r", stdin);
   int testcases;
   scanf("%d", &testcases);
   while (testcases--) {
      scanf("%d %d %d %d", &a, &b, &c, &d);
      string in1, in2;
      cin >> in1 >> in2;
      long long ans = 0;
      for(int i = 0; i < in1.size(); ++i){
         ans += calc(in1[i], in2[i]);
      }
      printf("%lld\n", ans);
   }
}

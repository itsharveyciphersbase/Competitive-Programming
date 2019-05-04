#include<bits/stdc++.h>

using namespace std;

long long N, D, mini;
int steps;
map<long long, int> mem;

int DigitSum(long long tmp){
   int ret = 0;
   while(tmp){
      ret += tmp % 10;
      tmp /= 10;
   }
   return ret;
}

int main(void){
   int testcases, n;
   scanf("%d", &testcases);
   while(testcases--){
      mem.clear();
      scanf("%lld %lld", &N, &D);
      queue<pair<long long, int> > q;
      q.push(make_pair(N, 0));
      mini = N, steps = 0;
      while(mem.size() < 100000){
         auto x = q.front();
         q.pop();
         if(mem[x.first])continue;
         else mem[x.first] = 1;
         if(x.first < mini){
            mini = x.first, steps = x.second;
         }else if(x.first == mini){
            steps = min(steps, x.second);
         }
         q.push(make_pair(x.first + D, x.second + 1));
         if(x.first >= 10)
            q.push(make_pair(DigitSum(x.first), x.second + 1));
      }
      printf("%lld %d\n", mini, steps);
   }
}

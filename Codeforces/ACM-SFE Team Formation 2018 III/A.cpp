#include <bits/stdc++.h>

using namespace std;

int alpha[26], alpha2[26], mini;
priority_queue<pair<int, char> > q;

bool check(){
   for(int i = 0; i < 26; ++i){
      if(alpha[i] < alpha2[i]){
         return false;
      }
   }
   return true;
}

bool can_remove(){
   int target = q.top().second - 'a';
   if(alpha[target] - 1 >= alpha2[target]){
      q.pop();
      alpha[target] --;
      return true;
   }
   return false;
}

int main(void){
   freopen("young.in", "r", stdin);
   int testcases;
   scanf("%d", &testcases);
   while (testcases--) {
      mini = INT_MAX;
      q = priority_queue < pair<int, char> >();
      memset(alpha2, 0, sizeof alpha2);
      memset(alpha, 0, sizeof alpha);
      string in1, in2;
      cin >> in1 >> in2;
      for(int i = 0; i < in2.size(); ++i){
         alpha2[in2[i] - 'a'] ++;
      }
      for(int i = 0; i < in1.size(); ++i){
         alpha[in1[i] - 'a'] ++;
         q.push(make_pair(-1 * (i + 1), in1[i]));
         if(check()){
            while(can_remove());
            mini = min(mini, i - abs(q.top().first) + 2);
         }
      }
      if(mini == INT_MAX)puts("-1");
      else printf("%d\n", mini);
   }
}

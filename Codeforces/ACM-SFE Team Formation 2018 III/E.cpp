#include <bits/stdc++.h>

using namespace std;

int main(void){
   freopen("sort.in", "r", stdin);
   int testcases;
   scanf("%d", &testcases);
   while (testcases--) {
      int n, m, k, x;
      scanf("%d %d %d", &n, &m, &k);
      vector<int> v;
      priority_queue<int> q;
      for(int i = 0; i < n; ++i){
         scanf("%d", &x);
         q.push(-1 * x);
         if(q.size() >= m){
            v.push_back(-1 * q.top());
            q.pop();
         }
      }
      if(k > v.size()){
         int times = k - v.size();
         while(times > 1)times --, q.pop();
         printf("%d\n", q.top() * -1);
      }else{
         printf("%d\n", v[k - 1]);
      }
   }
}

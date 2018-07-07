#include<bits/stdc++.h>
using namespace std;
map<int, int> ev1, od1, ev2, od2;
int main(void){
   int n, x;
   scanf("%d", &n);
   vector<int> q;
   for(int i = 0; i < n; ++i){
      scanf("%d", &x);
      q.push_back(x);
      if(i % 2){
         od1[x]++;
      }else{
         ev1[x]++;
      }
   }
   sort(q.begin(), q.end());
   for(int i = 0; i < n; ++i){
      if(i % 2){
         od2[q[i]]++;
      }else{
         ev2[q[i]]++;
      }
   }
   for(int i = 0; i < n; ++i){
      if(od2[q[i]] != od1[q[i]] || ev2[q[i]] != ev1[q[i]]){
         puts("NO");
         return 0;
      }
   }
   puts("YES");
}

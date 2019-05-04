#include<bits/stdc++.h>

using namespace std;

int n;
long long m;

int main(void){
   int testcases, n;
   scanf("%d %lld", &n, &m);
   vector<int>  ballons (n);
   vector<int>  candiesSubBallon (n);
   long long sum = 0;
   for(int i = 0; i < n; ++i){
      scanf("%d", &ballons[i]);
      sum += ballons[i];
   }
   for(int i = 0; i < n; ++i){
      scanf("%d", &candiesSubBallon[i]);
   }
   if(sum <= m){
      puts("0");
   }else{
      priority_queue<pair<long long, int> > pq;
      for(int i = 0; i < n; ++i){
         pq.push(make_pair(candiesSubBallon[i], candiesSubBallon[i]));
      }
   }

}

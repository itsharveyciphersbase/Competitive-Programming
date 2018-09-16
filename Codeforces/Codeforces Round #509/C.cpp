#include<bits/stdc++.h>
using namespace std;

int arr[2000001];
map<int,int> which_cycle;

int main(void){
   int n, m, d, cycle = 1;
   scanf("%d %d %d", &n, &m, &d);
   set<int> tmp;
   for(int i = 0; i < n; ++i){
      scanf("%d", &arr[i]);
      tmp.insert(arr[i]);
   }
   long nw = 1;
   set<int>::iterator itlow;
   while(tmp.size()){
      if(nw > m) nw = 1, cycle ++;
      itlow = tmp.lower_bound (nw);
      if(itlow == tmp.end()) {
         nw = m + 1;
         continue;
      }
      which_cycle[*itlow] = cycle;
      tmp.erase(*itlow);
      nw = *itlow + 1;
      nw += d;
   }
   printf("%d\n", cycle);
   for(int i = 0; i < n; ++i){
      printf("%d", which_cycle[arr[i]]);
      if(i + 1 != n)putchar(' ');
   }
   putchar('\n');
}

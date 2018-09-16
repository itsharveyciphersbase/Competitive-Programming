#include<bits/stdc++.h>
using namespace std;

int grid[10][10], n, arr[10], maxi, cases = 1;
map<set<int>, int> mem;

void simu(int ii, int maxii, set<int> z){
   if(ii == n / 2 + n % 2){
      if(mem.count(z) == 0)mem[z] = maxii;
      else mem[z] = min(maxii, mem[z]);
   }else{
      for(int i = 0; i < n; ++i){
         if(z.count(i) == 0){
            z.insert(i);
            simu(ii + 1, max(maxii, grid[ii][i]), z);
            z.erase(i);
         }
      }
   }
}

void simu2(int ii, int maxii, set<int> z){
   if(ii == n){
      set<int> z2;
      for(int i = 0; i < n; ++i){
         if(z.count(i) == 0)
            z2.insert(i);
      }
      maxi = min(maxi, max(maxii, mem[z2]));
   }else{
      for(int i = 0; i < n; ++i){
         if(z.count(i) == 0){
            z.insert(i);
            simu2(ii + 1, max(maxii, grid[ii][i]), z);
            z.erase(i);
         }
      }
   }
}

int main(void){
   freopen("fegla.in", "r", stdin);
   int testcases;
   scanf("%d", &testcases);
   while(testcases--){
      scanf("%d", &n);
      mem.clear();
      maxi = INT_MAX;
      for(int i = 0; i < n; ++i){
         for(int j = 0; j < n; ++j){
            scanf("%d", &grid[i][j]);
         }
      }
      simu(0, 0, set<int> ());
      simu2(n/2 + n % 2, 0, set<int> ());
      printf("Case %d: %d\n", cases++, maxi);
   }
}

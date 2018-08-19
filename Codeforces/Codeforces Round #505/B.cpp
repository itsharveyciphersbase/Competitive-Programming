#include <bits/stdc++.h>

using namespace std;
set<int> pack;
void fac(int x){
   int z = 2;
   while(z * z <= x){
      while(x % z == 0){
         x /= z;
         pack.insert(z);
      }
      z ++;
   }
   if(x != 1)pack.insert(x);
}

int main(void){
   int n;
   scanf("%d", &n);
   vector<pair<int,int> > arr(n);
   for(int i = 0; i < n; ++i){
      scanf("%d %d", &arr[i].first, &arr[i].second);
   }
   fac(arr[0].first);
   fac(arr[0].second);
   for(int i = 1; i < n; ++i){
      set<int> nw;
      for(int ii : pack){
         if((arr[i].first % ii == 0 || arr[i].second % ii == 0)){
            nw.insert(ii);
         }
      }
      pack = nw;
      if(pack.size() == 0)
         break;
   }
   if(pack.size() != 0){
       for(int ii : pack){
           printf("%d\n", ii);
           break;
       }
   }else {
       puts("-1");
   }
}

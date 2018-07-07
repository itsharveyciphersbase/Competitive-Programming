#include<bits/stdc++.h>
using namespace std;

int main(void){
   set<long> ava;
   int n, maxi = 0; long x;
   scanf("%d", &n);
   vector<long> av (n);
   for(int i = 0; i < n; ++i){
      scanf("%ld", &av[i]);
      ava.insert(av[i]);
   }
   sort(av.begin(), av.end());
   //find 3 loop
   for(int i = 0; i < n; ++i){
      long st = 1;
      while(av[i] - st >= av[0] && av[i] + st <= av[n - 1]){
         if(ava.count(av[i] - st) && ava.count(av[i] + st)){
            printf("3\n%ld %ld %ld\n", av[i], av[i] + st, av[i] - st);
            return 0;
         }else st *= 2;
      }
   }
   //find 2 loop
   for(int i = 0; i < n; ++i){
      long st = 1;
      while(av[i] + st <= av[n - 1]){
         if(ava.count(av[i] + st)){
            printf("2\n%ld %ld\n", av[i], av[i] + st);
            return 0;
         }else st *= 2;
      }
   }
   printf("1\n%ld\n", av[0]);
}

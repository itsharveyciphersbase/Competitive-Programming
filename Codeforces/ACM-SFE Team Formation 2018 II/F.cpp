#include <bits/stdc++.h>

using namespace std;

int cases = 1, arr[10], k;
map<int, int> facs;

void factorize(long n){
   int z = 2;
   while(z * z <= n){
      while(n % z == 0){
         facs[-1 * z] ++;
         n /= z;
      }
      z ++;
   }
   if(n != 1)
      facs[-1 * n] ++;
}

bool can(int x){
   int tmp[10];
   memset(tmp, 0, sizeof tmp);
   while(x){
      tmp[x % 10]++;
      x /= 10;
   }
   for(int i = 0; i < 10; ++i){
      if(tmp[i] + arr[i] > k)
         return false;
   }
   return true;
}

void add(int x){
   while(x){
      arr[x % 10]++;
      x /= 10;
   }
}

int main(void){
   freopen("factors.in", "r", stdin);
   int testcases;
   scanf("%d", &testcases);
   while (testcases--) {
      facs.clear();
      memset(arr, 0, sizeof arr);
      printf("Case %d: ", cases++);
      long n;
      scanf("%ld %d", &n, &k);
      int sum = 0;
      factorize(n);
      for(pair<int,int> tmp : facs){
         int times = 0;
         while(can(abs(tmp.first)) && times < tmp.second)
            sum += abs(tmp.first), times ++, add(abs(tmp.first));
      }

      printf("%d\n", sum);
   }
}

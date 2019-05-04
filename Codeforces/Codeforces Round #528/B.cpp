#include <bits/stdc++.h>
using namespace std;

int main(void){
   int n, k;
   cin >> n >> k;
   int mini = INT_MAX;
   for(int i = 1; i < k; ++i){
      int tmp = n / i;
      if(n % i == 0)mini = min(mini, tmp * k + i);
   }
   cout << mini;
}

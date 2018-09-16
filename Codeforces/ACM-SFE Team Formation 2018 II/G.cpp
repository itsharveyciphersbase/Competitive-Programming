#include <bits/stdc++.h>

using namespace std;

int cases = 1;

int main(void){
   freopen("rgb.in", "r", stdin);
   int testcases;
   scanf("%d", &testcases);
   while (testcases--) {
      printf("Case %d: ", cases++);
      long x;
      scanf("%ld", &x);
      printf("%ld\n",bitset<8>(bitset<24>(x).to_string().substr(8, 8)).to_ulong());
   }
}

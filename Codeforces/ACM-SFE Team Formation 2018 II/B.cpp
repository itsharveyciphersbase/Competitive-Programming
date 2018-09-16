#include <bits/stdc++.h>

using namespace std;

int cases = 1, r, l;

int main(void){
   freopen("dalia.in", "r", stdin);
   int testcases;
   scanf("%d", &testcases);
   while (testcases--) {
      printf("Case %d: ", cases++);
      scanf("%d %d", &r, &l);
      long double circumference = 2 * r * 22.0 / 7.0;
      printf("%d\n", (int) (l / circumference));
   }
}

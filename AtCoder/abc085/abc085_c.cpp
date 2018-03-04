#include<bits/stdc++.h>

using namespace std;

int main(void){
  int n, y;
  scanf("%d %d", &n, &y);
  for(int i = 0, ii = 0; ii <= y;++i, ii += 1000){
    for(int j = 0, jj = 0; jj + ii <= y;++j, jj += 5000){
      int k = n - i - j, kk = (n - i - j) * 10000;
        if(ii + jj + kk == y && i + j + k == n){
          printf("%d %d %d\n", k, j, i);
          return 0;
        }
    }
  }
  puts("-1 -1 -1");
}

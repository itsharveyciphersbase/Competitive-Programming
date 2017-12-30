#include<bits/stdc++.h>

using namespace std;

int p, q, n, b1, b2, s1, s2;
int mod = 1000000007;
int dp[51][51][101][101][2];
//               p      q     b1 + b2   num        choice
int simulate(int x, int z, int turns, int nw, int last){
  // cout << x << " " << z << " " << x1 << " " << z1 << " " << nw << " " << last << endl;
  if(nw == n)
    return 1;
  if(dp[x][z][turns][nw][last] != -1)
    return dp[x][z][turns][nw][last];
  long long ret = 0;
  int x1, z1;
  x1 = z1 = turns / 2;
  if(turns % 2)
    if(last == 1)
      x1 ++;
    else z1 ++;
  if(last != 1 && x1 < b1){
    for(int i = 1; i + nw <= n && i <= s1 && x + i <= p; ++i){
      ret += simulate(x + i, z, turns + 1, nw + i, 1);
      ret %= mod;
    }
  }
  if(last != 2 && z1 < b2){
    for(int i = 1; i + nw <= n && i <= s2 && z + i <= q; ++i){
      ret += simulate(x, z + i, turns + 1, nw + i, 2);
      ret %= mod;
    }
  }
  return dp[x][z][turns][nw][last] = ret;
}

int main(void){
  int testcases;
  scanf("%d", &testcases);
  while(testcases --){
    memset(dp, -1 , sizeof dp);
    scanf("%d %d %d", &p, &q, &n);
    scanf("%d %d", &b1, &b2);
    scanf("%d %d", &s1, &s2);
    printf("%d\n", simulate(0, 0, 0, 0, 0));
  }
}

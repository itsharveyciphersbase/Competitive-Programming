#include<bits/stdc++.h>

using namespace std;

int Beds[55], W[55], dp[13][4096];

vector<int> Bed[55];

int n, m, cases = 1;

int cn(int ii){
  int sum = 0;
  for(int i = 0; i < 12; ++i){
    if((1 << i) & ii){
      sum ++;
    }
  }
  return sum;
}

int chec(int bed, int ii){
  int sum = 0;
  for(int i = 0; i < 12; ++i){
    if((1 << i) & ii){
      if(i  >= m)
        return 0;
      sum += W[i];
    }
  }
  return sum <= Beds[bed];
}

int func(int bed, int nw){
  if(bed == n){
    return cn(nw);
  }else if(dp[bed][nw] != -1){
    return dp[bed][nw];
  }
  int maxi = cn(nw);
  for(int i : Bed[bed]){
    if((i & nw) == 0 && chec(bed, i)){
      maxi = max(maxi, func(bed + 1, nw ^ i));
    }
  }
  return dp[bed][nw] = maxi;
}

int main(void){
  freopen("hotel.in", "r", stdin);
  int testcases;
  scanf("%d", &testcases);
  while(testcases --){
    memset(dp, -1, sizeof dp);
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
      scanf("%d", &Beds[i]);
      Bed[i].clear();
    }
    for (int i = 0; i < m; i++) {
      scanf("%d", &W[i]);
    }
    for(int j = 0; j < n; j++){
      for(int i = 0; i < 4096; ++i){
        if(chec(j, i)){
          Bed[j].push_back(i);
        }
      }
    }
    printf("Case %d: %d\n", cases++, func(0, 0));
  }
}

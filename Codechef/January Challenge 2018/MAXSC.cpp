#include<bits/stdc++.h>

using namespace std;

int main(void){
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
    int n, N;
    scanf("%d", &n), N = n;
    int v[N][N];
    while(n--){
      for(int i = 0; i < N; ++i)
        scanf("%d", &v[n][i]);
      sort(v[n], v[n] + N, greater<int>());
    }
    long long last = LLONG_MAX, sum = 0;
    for(int i = 0; i < N; ++i){
      for(int j = 0; j < N; ++j)
        if(v[i][j] < last){
          sum += v[i][j], last = v[i][j];
          break;
        }else if(j == N - 1) sum = -1, i = N;
    }
    printf("%lld\n", sum);
  }
}

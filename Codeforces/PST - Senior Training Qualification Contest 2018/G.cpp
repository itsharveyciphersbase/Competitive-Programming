#include <bits/stdc++.h>
using namespace std;

int n, k;
pair<pair<int,int>, pair<int,int> meets;
long long dp[100001][5][5];

long long rec(int i, int last, int k){
   long long most_profit = 0;
   if(last)
}

int main(void) {
   // freopen("meetings.in", "r", stdin);
	int test;
	scanf("%d", &test);
	while(test--){
      scanf("%d %d", &n, &k);
      for(int i = 0; i < n; ++i){
         scanf("%d %d %d %d", &meets[i].first.first, &meets[i].first.first, &meets[i].second.first, &meets[i].second.second);
      }
      cout << rec(0, 5, k) << "\n";
	}
}

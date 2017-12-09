#include<bits/stdc++.h>

using namespace std;
set<map<int, int> > dp[121][10];
// primes 2 3 5 7
// combinations 4 5 6 7 8 10 10 12 14
int prime [] = {2, 3, 5, 7};
int main(void){
    int k, m, n;
    scanf("%d,%d,%d", &k, &m, &n);
    for(int i = 0; i < 4 && prime[i] < n; ++i){
        for(int j = 0; j < 4 && prime[j] < n; ++j){
            map<int, int> tmp;
            tmp[prime[i]]++;
            tmp[prime[j]]++;
            dp[prime[i] + prime[j]][2].insert(tmp);
        }
    }
    for(int s = 1; s < n; ++s){
        // numbers up to n
        for(int i = s + 1; i < 121; ++i){
            //each number up to 100
            for(int j = 3; j <= k; ++j){
                // each combination from 2 to k - 1
                set< map<int, int> >::iterator it;
                for (it = dp[i - s][j - 1].begin(); it != dp[i - s][j - 1].end(); ++it){
                    map<int, int> f = *it; // Note the "*" here
                    f[s]++;
                    dp[i][j].insert(f);
                }
            }
        }
    }
    int tmp = m % n, sum = 0;
    while(tmp < 121){
        sum += dp[tmp][k].size();
        tmp += n;
    }
    printf("%d", sum);
}
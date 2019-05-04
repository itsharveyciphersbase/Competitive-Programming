#include <bits/stdc++.h>
using namespace std;

int main(void) {
   freopen("equations.in", "r", stdin);
	int test;
	scanf("%d", &test);
	long ans = 0;
	while(test--){
	    long long l, r;
	    int ans = 0;
	    scanf("%lld %lld", &l, &r);
        for(long i = 2; i * i * 7 <= 1000 * 1000; ++i){
            if(i * 7 >= l && i * i * 7 <= r && i * i * 7 >= l && i * 7 <= r){
                ans ++;
            }
        }
        if(1 >= l && 11 <= r && 11 >= l && 1 <= r){
            ans ++;
        }
        if(1 >= l && 49 <= r && 49 >= l && 1 <= r){
            ans ++;
        }
        if(7 >= l && 7 <= r){
            ans ++;
        }
        printf("%d\n", ans);
	}
}

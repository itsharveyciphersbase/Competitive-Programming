#include <bits/stdc++.h>
using namespace std;

int main(void) {
   freopen("fractions.in", "r", stdin);
	int test;
	scanf("%d", &test);
	long ans = 0;
	while(test--){
	    ans = 0;
	    int n;
	    scanf("%d", &n);
	    int zz = 0;
	    for(int i = 1; i <= n;++i){
	        for(int j = 1; j <= n; ++j){
	            if(j > i) zz++;
	        }
	    }
	    for(int i = 1; i <= n;++i){
	        for(int j = 1; j <= n; ++j){
	            int s = i, m = j;
	            if(j == i){
	                ans += zz;
	            }else if(j > i){
	                ans += n;
	            }else{
	                s = s / __gcd(i, j);
	                m = m / __gcd(i, j);
	                m = s - m;
	                for(int p = 1; (s * p) <= n && (m * p) <= n; p++){
	                    ans ++;
	                }
	                if(m * 2 == s)ans --;
	            }
	        }
	    }
	    printf("%ld\n", ans / 2);
	}
}

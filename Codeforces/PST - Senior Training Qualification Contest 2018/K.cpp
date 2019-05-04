#include <bits/stdc++.h>
using namespace std;

int main(void) {
   freopen("simple.in", "r", stdin);
	int test;
	cin >> test;
	while(test--){
		long a, b;
		scanf("%ld %ld", &a, &b);
		long ans = abs(abs(b) - abs(a));
		if(abs(b) < abs(a)){
		    ans += (a > 0);
		    if(b > 0)ans ++;
		}else if(abs(b) > abs(a)){
		    ans += (a < 0);
		    if(b < 0)ans ++;
		}else{
		    ans += !(b == a);
		}
		printf("%ld\n", ans);
	}
}

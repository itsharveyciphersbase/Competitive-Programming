#include <bits/stdc++.h>
using namespace std;

int main(void) {
   freopen("leaves.in", "r", stdin);
	int test;
	scanf("%d", &test);
	while(test--){
		long long a, b;
		scanf("%lld %lld", &a, &b);
		long long lev = 2, s = a * 2;
		while(b > lev){
		    b -= lev;
		    lev *= 2;
		    s *= 2;
		}
		printf("%lld\n", s + b - 1);
	}
}

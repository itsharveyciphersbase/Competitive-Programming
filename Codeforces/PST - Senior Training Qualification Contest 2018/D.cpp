#include <bits/stdc++.h>
using namespace std;

int main(void) {
   freopen("morty.in", "r", stdin);
	int test;
	cin >> test;
	while(test--){
	    long n;
	    scanf("%ld", &n);
	    long long ans = (long long)(n) * (n - 3);
	    ans /= 2;
	    cout << ans << "\n";
	}
}

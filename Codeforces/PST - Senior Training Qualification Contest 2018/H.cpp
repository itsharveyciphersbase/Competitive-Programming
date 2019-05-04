#include <bits/stdc++.h>
using namespace std;

int main(void) {
   freopen("notshort.in", "r", stdin);
	int test;
	cin >> test;
	while(test--){
	    int n;
	    scanf("%d", &n);
	    int lim, ans = 0, tmp;
	    scanf("%d", &lim);
	    for(int i = 1; i < n; ++i){
	        scanf("%d", &tmp);
	        if(tmp >= lim)ans ++;
	    }
	    cout << ans << "\n";
	}
}

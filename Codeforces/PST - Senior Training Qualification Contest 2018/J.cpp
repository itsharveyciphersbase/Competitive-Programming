#include <bits/stdc++.h>
using namespace std;

int arr[100011];
int main(void) {
   freopen("pyramid.in", "r", stdin);
	int test, n;
	scanf("%d", &test);
	while(test--){
    	scanf("%d", &n);
    	int cn1 = -1, cn2 = -1, maxi = 0, mini = 1000000001;
    	long long ans = 0;
	    for(int i = 1; i <= n; ++i){
	        scanf("%d", &arr[i]);
	        maxi = max(maxi, arr[i]);
	        mini = min(mini, arr[i]);
	    }
	    for(int i = 1; i <= n; ++i){
	        if(arr[i] == maxi){
	            cn1 = i;
	            while(i + 1 <= n && arr[i] == arr[i + 1]){
	                i ++;
	            }
	            cn2 = i;
	            break;
	        }
	    }
	    for(int i = 1; i <= n; ++i){
	        if(arr[i] == mini){
                if(i < cn1){
                    ans += n - cn1 + 1;
                }else if(i > cn2){
                    ans += cn2;
                }
            }
	    }
	    if(ans)
	        printf("%lld\n", ans - (arr[1] == arr[n]));
	    else  printf("%lld\n", ((long long)n * (n + 1)) / 2);
	}
}

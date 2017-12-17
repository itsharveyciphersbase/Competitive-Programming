#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int testcases;
    scanf("%d", &testcases);
    while(testcases--){
        int n;
        scanf("%d", &n);
        vector<int> arr(n);
        for(int i = 0; i < n; ++i){
            scanf("%d", &arr[i]);
        }
        sort(arr.begin(), arr.end());
        long long ans = 0;
        for(int i = 0; i < n - 1; ++i){
            ans += arr[i + 1] - arr[i];
        }
        printf("%lld\n", ans);
    }
}

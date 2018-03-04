#include<bits/stdc++.h>

using namespace std;
const int N = 1000000;
int proc(int n){
    int odd = 0, even = 0;
    while(n){
        if((n % 10) % 2)
            odd += (n % 10);
        else
            even += (n % 10);
        n /= 10;
    }
    return abs(even - odd);
}
long long pre[2 * N + 1];
long long ans[N + 1];

int main(void){
    pre[1] = 1;
    for(int i = 2; i <= 2 * N; ++i){
        pre[i] = pre[i - 1] + proc(i);
    }
    ans[1] = 2;
    for(int i = 2; i <= N; ++i){
        ans[i] = ans[i - 1] + 2LL * (pre[(2 * i) - 1] - pre[i]) + proc(2 * i);
    }
    int testcases;
    scanf("%d", &testcases);
    while(testcases--){
        int n;
        scanf("%d", &n);
        printf("%lld\n", ans[n]);
    }
}
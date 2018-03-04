#include<bits/stdc++.h>

using namespace std;

long long conc(long long x){
    long long ret = x;
    while(x > 0LL){
        ret *= 10;
        ret += (x % 10);
        x /= 10;
    }
    return ret;
}

int main(void){
    int n, m;
    scanf("%d %d", &n, &m);
    long long ans = 0LL;
    for(int i = 1; i <= n; ++i){
        ans += conc(i);
        if(ans > m)
            ans %= m;
    }
    printf("%d\n", int(ans));
}
#include<bits/stdc++.h>

using namespace std;
int cases = 1 ;
int main(void){
    freopen("math.in", "r", stdin);
    int n, d;
    scanf("%d", &n);
    while(n--){
        long long ans = 0;
        scanf("%d", &d);
        for(int i = 1; i * i <= d; ++i){
            if(!(d % i)){
                if(i * i == d){
                    ans += i;
                }else{
                    ans += i;
                    ans += d / i;
                }
            }
        }
        cout << "Case " <<  cases++ << ": " << ans << "\n";
    }
}

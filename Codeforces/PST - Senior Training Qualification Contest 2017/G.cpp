#include<bits/stdc++.h>

using namespace std;
int cases = 1 ;
int main(void){
    freopen("pizza.in", "r", stdin);
    int n;
    scanf("%d", &n);
    while(n--){
        int in;
        cin >> in;
        long long ans = in;
        ans = (ans * (ans + 1)) / 2;
        ans ++;
        cout << "Case " << cases++ << ": " << ans << "\n";
    }
}

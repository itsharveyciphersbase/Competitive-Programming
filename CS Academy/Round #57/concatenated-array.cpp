#include <bits/stdc++.h>

using namespace std;

int main(void) {
    long long n, k;
    cin >> n >> k;
    string in;
    cin >> in;
    long long cnt = 0LL, cnt2 = 0LL;
    for(int i = 0; i < n && in[i] == '0'; ++i, cnt2++);
    for(int i = n - 1; i > -1 && in[i] == '0'; --i, cnt++);
    long long cur = 0LL, maxi = 0LL;
    for(int i = cnt2 + 1; i <= n - cnt; ++i){
        if(in[i] == '0')
            cur++;
        else{
            maxi = max(maxi, cur);
            cur = 0;
        }
    }
    if(cnt == n)
        cout << cnt * k;
    else if(k == 1)cout << max(max(cnt, cnt2), maxi);
    else cout << max(cnt + cnt2, maxi);
}
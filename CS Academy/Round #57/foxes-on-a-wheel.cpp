#include <bits/stdc++.h>

using namespace std;
int fox[100001], hid[200001], dn[200001];
int n, k, x;
int nex(int z){
    if(z == n)
        return 0;
    return z + 1;
}
int pre(int z){
    if(z == 0)
        return n;
    return z - 1;
}

int main(void) {
    cin >> n >> k;
    for(int i = 0; i < k; ++i){
        cin >> fox[i]; hid[fox[i]] = 2;
    }
    for(int i = 0; i < k; ++i)
        {cin >> x; hid[x] = 1;}
    int ans = 0;
    for(int i = 1; i <= n; ++i)
    {
        int j = i + 1;
        if(j > n) j = 1;
        if(hid[i] + hid[j] == 3){
            ++ans;
            hid[i] = hid[j] = 0;
        }
    }
    cout << ans + (k - ans) * 2;
}
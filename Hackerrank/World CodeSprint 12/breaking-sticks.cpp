#include <bits/stdc++.h>
using namespace std;
vector<long long> facs;

void factor(long long x){
    long long z = 2;
    while(z * z <= x){
        while(x % z == 0){
            facs.push_back(z);
            x/= z;
        }
        z++;
    }
    if(x > 1)
        facs.push_back(x);
}

int main() {
    int n;
    long long ans = 0;
    cin >> n;
    vector <long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        facs.clear();
        factor(a[i]);
        long long inc = a[i];
        for(auto j : facs){
            ans += inc;
            inc /= j;
        }
        ans += inc;
    }
    cout << ans;
    return 0;
}

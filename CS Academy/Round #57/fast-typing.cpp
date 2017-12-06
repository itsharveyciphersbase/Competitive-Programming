#include <bits/stdc++.h>

using namespace std;
int tim[26];
int main(void) {
    string in;
    cin >> in;
    for(int i = 0; i < 26; ++i)
        cin >> tim[i];
    int ans = 0;
    for(int i = 0; i < in.size(); ++i)
        ans += tim[in[i] - 'a'];
        
    cout << ans;
}
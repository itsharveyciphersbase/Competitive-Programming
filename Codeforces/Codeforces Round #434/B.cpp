#include <bits/stdc++.h>

using namespace std;
vector<pair<int, int> > flats;

int main(void) {
    int n, m, z, x;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; ++i) {
        scanf("%d %d", &x, &z);
        flats.emplace_back(z, x);
    }
    vector<int> ans;
    for (int j = 1; j <= 100; ++j) {
        bool valid = true;
        for (auto &flat : flats) {
            if (flat.second % j)
                valid &= ((flat.second / j + (flat.second % j != 0 ? 1 : 0)) == flat.first);
            else
                valid &= ((flat.second / j) == flat.first);
            if (!valid)break;
        }
        if (valid)
            ans.push_back(j);
    }
    set<int> final;
    for (auto &an : ans) {
        final.emplace((n / an) + (n % an != 0 ? 1 : 0));
    }
    if (final.size() == 1) {
        for (auto &fin : final) {
            printf("%d\n", fin);
        }
    } else puts("-1");
}

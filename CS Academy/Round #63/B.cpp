#include <bits/stdc++.h>

using namespace std;
double deals[51];
int main(void) {
    double s, k;
    int q;
    cin >> s >> q >> k;
    for(int i = 0; i < q; ++i){
        cin >> deals[i];
    }
    sort(deals, deals + q);
    for(int i = 0; i < q; ++i){
        double tmp = deals[i], tmp2;
        tmp2 = s / 100.00 * tmp;
        s += max(k, tmp2);
    }
    cout << setprecision(11) << s;
}

#include<bits/stdc++.h>

using namespace std;

int grid [101][101];

int main(void) {
    int n, x1, x2, y1, y2;
    cin >> n;
    while(n--){
        cin >> x1 >> x2>> y1 >> y2;
        for (int i = x1; i <= y1; ++i) {
            for (int j = x2; j <= y2; ++j) {
                grid[i][j]++;
            }
        }
    }
    long long count = 0;
    for (int k = 1; k <= 100; ++k) {
        for (int i = 1; i <= 100; ++i) {
            count+=grid[k][i];
        }
    }
    cout << count << "\n";
}

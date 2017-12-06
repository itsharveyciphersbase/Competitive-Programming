#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n, x, sum = 0;
    scanf("%d", &n);
    int mini = INT_MAX, maxi = 0;
    for(int i = 0; i < n; ++i){
        scanf("%d", &x);
        sum +=x;
        maxi = max(maxi, x);
        mini = min(mini, x);
    }
    printf("%d\n", (sum - mini - maxi) / (n - 2));
}
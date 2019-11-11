include <bits/stdc++.h>

using namespace std;
int test, n, b, w;
int nn[3];
pair<int, pair<int, int> > arr[10];
int maxi = 0;

void Go(int i, int CurrL[], int import, int total_w) {
    if (i == b) {
        maxi = max(maxi, import);
        return;
    }
    Go(i + 1, CurrL, import, total_w);
    if (n >= 1 && CurrL[0] >= arr[i].first && w >= total_w + arr[i].second.first) {
        CurrL[0] -= arr[i].first;
        Go(i + 1, CurrL, import + arr[i].second.second, total_w + arr[i].second.first);
        CurrL[0] += arr[i].first;
    }
    if (n >= 2 && CurrL[1] >= arr[i].first && w >= total_w + arr[i].second.first) {
        CurrL[1] -= arr[i].first;
        Go(i + 1, CurrL, import + arr[i].second.second, total_w + arr[i].second.first);
        CurrL[1] += arr[i].first;
    }
    if (n >= 3 && CurrL[2] >= arr[i].first && w >= total_w + arr[i].second.first) {
        CurrL[2] -= arr[i].first;
        Go(i + 1, CurrL, import + arr[i].second.second, total_w + arr[i].second.first);
        CurrL[2] += arr[i].first;
    }
}

int main(void) {
    freopen("airport.in", "r", stdin);
    scanf("%d", &test);
    while (test--) {
        maxi = 0;
        scanf("%d %d %d", &n, &b, &w);
        for (int i = 0; i < n; ++i) {
            scanf("%d", &nn[i]);
        }
        for (int i = 0; i < b; ++i) {
            scanf("%d %d %d", &arr[i].first, &arr[i].second.first, &arr[i].second.second);
        }
        int io = 0, CurrL[n], import = 0, total_w = 0;
        for (int i = 0; i < n; ++i) {
            CurrL[i] = nn[i];
        }
        Go(io, CurrL, total_w, import);
        printf("%d\n", maxi);
    }
}

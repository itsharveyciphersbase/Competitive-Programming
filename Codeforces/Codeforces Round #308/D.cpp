include<bits/stdc++.h>

using namespace std;
pair<int, int> arr[2001];

int main(void) {
    int n, x, y;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        scanf("%d %d", &x, &y);
        arr[i] = make_pair(x, y);
    }
    int count = 0;
    sort(arr,arr+n);
    for (int j = 0; j < n - 2; ++j) {
        for (int i = j + 1; i < n - 1; ++i) {
            for (int k = i + 1; k < n; ++k) {
                if (((arr[j].first * (arr[i].second-arr[k].second) + (arr[i].first * (arr[k].second-arr[j].second)) +
                        (arr[k].first * (arr[j].second-arr[i].second))) != 0)) {
                    count++;
                    //cout << j <<"-" << i <<" -" << k <<endl;
                }
            }
        }
    }
    printf("%d\n", count);
}

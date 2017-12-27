#include <bits/stdc++.h>

using namespace std;

pair<int, int> arr[200001];
int final [200001];

int main(void) {
    memset(final, 1, sizeof final);
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> arr[i].first;
    }
    for(int i = 0; i < n; ++i){
        cin >> arr[i].second;
    }
    for(int i = 1; i < n; ++i){
        if(arr[i].first != arr[i - 1].first)
            final[i - 1] = 0;
    }
    for(int i = 0; i < n - 1; ++i){
        if(arr[i].second != arr[i + 1].second)
            final[i + 1] = 0;
    }
    for(int i = 0; i < n; ++i){
        if(final[i])cout << "1";
        else cout << "0";
    }
}

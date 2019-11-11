#include <bits/stdc++.h>
using namespace std;

int arr[10];
int main(void) {
    int testcases;
    scanf("%d", &testcases);
    while(testcases--){
        memset(arr, 0, sizeof arr);
        int n;
        scanf("%d", &n);
        for(int i = 0; i < n; ++i){
            string input;
            cin >> input;
            for(int j = 0; j < 10; ++j){
                arr[j] += input[j] - '0';
            }
        }
        int ans = 0;
        for(int j = 0; j < 10; ++j){
            ans += (arr[j] % 2 == 1);
        }
        printf("%d\n", ans);
    }
}


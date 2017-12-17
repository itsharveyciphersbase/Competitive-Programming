#include <bits/stdc++.h>

using namespace std;
int arr[50001];
int main(void) {
    int n;
    scanf("%d", &n);
    int cn = 2 * n, cn2 = 2 * n;
    for(int i = 0; i < n * 2; ++i){
        scanf("%d", &arr[i]);
        if(i % 2){
          cn2 -= (arr[i] == 0); cn -= (arr[i] == 1);
        }else {
          cn -= (arr[i] == 0); cn2 -= (arr[i] == 1);
        }
    }
    printf("%d", min(cn/2, cn2/2));
}

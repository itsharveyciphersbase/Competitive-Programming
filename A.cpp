#include<bits/stdc++.h>

using namespace std;

int arr[51], LIS[51], LDS[51];

void pro(int i){
    bitset<30> b(arr[i]);
    arr[i] = b.count();
}

int main(void){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i){
        scanf("%d", &arr[i]);
        pro(i);
    }
    for(int i = 0; i < n; ++i){
        LIS[i] = arr[i];
        int maxi = 0;
        for(int j = 0; j < i; ++j){
            if(arr[j] < arr[i])
                maxi = max(LIS[j], maxi);
        }
        LIS[i] += maxi;
    }
    for(int i = n - 1; i > -1; --i){
        LDS[i] = arr[i];
        int maxi = 0;
        for(int j = n - 1; j > i; --j){
            if(arr[j] < arr[i])
                maxi = max(LDS[j], maxi);
        }
        LDS[i] += maxi;
    }
    int maxi = -1;
    for(int i = 0; i < n; ++i){
        if(LDS[i] != arr[i] && LIS[i] != arr[i]){
            maxi = max(LDS[i] + LIS[i] - arr[i], maxi);
        }
    }
    if(maxi != -1){
        printf("%d", maxi);
    }else printf("Impossible");
}
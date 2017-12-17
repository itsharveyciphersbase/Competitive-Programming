#include<bits/stdc++.h>

using namespace std;

int arr[3001];
vector<int> pl[300001];

int main(void){
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; ++i){
        scanf("%d", &arr[i]);
        pl[arr[i]].push_back(i);
    }
    for(int i = 0; i < m; ++i){
        int x, z;
        char direction;
        scanf("%d %d %c", &x, &z, &direction);
        if(arr[x] == z){
            printf("0\n");
        }else if(!pl[z].empty()){
            int ans = INT_MAX;
            if(direction == 'L'){
                for(int i : pl[z])
                    if(i > x){
                        ans = min(ans, n - abs(i - x));
                    }else{
                        ans = min(ans, abs(i - x));
                    }
            }else{
                for(int i : pl[z])
                    if(i < x){
                        ans = min(ans, n - abs(i - x));
                    }else{
                        ans = min(ans, abs(i - x));
                    }
            }
            printf("%d\n", ans);
        }else puts("-1");
    }
}

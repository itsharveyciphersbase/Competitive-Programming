#include<bits/stdc++.h>

using namespace std;
int cases = 1 ;
int main(void){
     freopen("keys.in", "r", stdin);
    int n;
    scanf("%d", &n);
    while(n--){
        set<int> k;
        int n, m, h, x, z;
        scanf("%d %d %d", &n, &m, &h);
        for(int i = 0; i < h; ++i){
            scanf("%d %d", &x, &z);
            if(n - z < m)k.insert(x);
        }
        printf("Case %d: %d\n", cases++, int(k.size()));
    }
}

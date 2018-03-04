#include <bits/stdc++.h>

using namespace std;
vector<int> st [100001], ed [100001];
int cn[100001];

int main(void) {
    int n, m, x, z;
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= m; ++i){
        scanf("%d %d", &x, &z);
        st[x].push_back(i);
        ed[z].push_back(i);
    }
    set<int> k;
    int all = 0;
    for(int i = 1; i <= n; ++i){
        for(auto xx : st[i]){
            k.insert(xx);
        }
        if(k.size() == 1){
            for(auto xx : k){
                cn[xx]++;
            }
        }else if(k.size() == 0) all++;
        for(auto xx : ed[i]){
            k.erase(xx);
        }
    }
    for(int i = 1; i <= m; ++i){
        printf("%d\n", cn[i]);
    }
}

#include <bits/stdc++.h>

using namespace std;
vector<int> dest[100001];
vector<int> taken[100001];
int n, e1, e2, tmp1, tmp2;

int get_maxi(int i, int di){
    if(i == 0){
        return max(get_maxi(1, 0),get_maxi(1, 1)); 
    }
    if(i == 1){
        if(di == 1){
            int cnt = 0;
            for(int i = e1; i <= n; ++i){
                for(int j = 0; j < int(dest[i].size()); ++j){
                    if(!taken[i][j] && dest[i][j] > i){
                        taken[i][j] = 1;
                        cnt ++;
                    }
                }
            }
            int maxo = max(get_maxi(2, 0),get_maxi(2, 1));
            for(int i = e1; i <= n; ++i){
                for(int j = 0; j < int(dest[i].size()); ++j){
                    if(taken[i][j] && dest[i][j] > i){
                        taken[i][j] = 0;
                    }
                }
            }
            return cnt + maxo;
        }else{
            int cnt = 0;
            for(int i = e1; i > 0; --i){
                for(int j = 0; j < int(dest[i].size()); ++j){
                    if(!taken[i][j] && dest[i][j] < i){
                        taken[i][j] = 1;
                        cnt ++;
                    }
                }
            }
            int maxo = max(get_maxi(2, 0),get_maxi(2, 1));
            for(int i = e1; i > 0; --i){
                for(int j = 0; j < int(dest[i].size()); ++j){
                    if(taken[i][j] && dest[i][j] < i){
                        taken[i][j] = 0;
                    }
                }
            }
            return cnt + maxo;
        }
    }
    if(i == 2){
        if(di == 1){
            int cnt = 0;
            for(int i = e2; i <= n; ++i){
                for(int j = 0; j < int(dest[i].size()); ++j){
                    if(!taken[i][j] && dest[i][j] > i){
                        taken[i][j] = 1;
                        cnt ++;
                    }
                }
            }
            for(int i = e2; i <= n; ++i){
                for(int j = 0; j < int(dest[i].size()); ++j){
                    if(taken[i][j] && dest[i][j] > i){
                        taken[i][j] = 0;
                    }
                }
            }
            return cnt;
        }else{
            int cnt = 0;
            for(int i = e2; i > 0; --i){
                for(int j = 0; j < int(dest[i].size()); ++j){
                    if(!taken[i][j] && dest[i][j] < i){
                        taken[i][j] = 1;
                        cnt ++;
                    }
                }
            }
            for(int i = e2; i > 0; --i){
                for(int j = 0; j < int(dest[i].size()); ++j){
                    if(taken[i][j] && dest[i][j] < i){
                        taken[i][j] = 0;
                    }
                }
            }
            return cnt;
        }
    }
}

int main(void) {
    scanf("%d %d %d", &n, &e1, &e2);
    for(int i = 0; i < n; ++i){
        scanf("%d %d", &tmp1, &tmp2);
        dest[tmp1].push_back(tmp2);
        taken[tmp1].push_back(0);
    }
    printf("%d\n", get_maxi(0, -1));
}
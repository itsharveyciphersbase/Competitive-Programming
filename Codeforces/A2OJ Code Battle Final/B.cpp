#include <bits/stdc++.h>

using namespace std;
#define fr first
#define sc second
#define mp make_pair
#define pb push_back

int main(void) {
    int n, t, x, y, tm;scanf("%d", &n);
    vector<pair<pair<int, int>, pair<int, int>>> cards;
    for(int i = 0; i < n; ++i){
        scanf("%d %d %d", &t, &x, &y);
        cards.pb(mp(mp(x-y, t), mp(x, y)));
    }
    int sx = 1, sy = 1;
    sort(cards.rbegin(), cards.rend());
    for(int i = 0; i < n; ++i){
        if(cards[i].fr.sc == 1){
            int nsx = sx + cards[i].sc.fr;
            //check
            if(min(nsx, sx) <= 0 && max(nsx, sx) >= 0){puts("NO"); return 0;}
            sx = nsx;
            nsx = sx - cards[i].sc.sc;
            //check
            if(min(nsx, sx) <= 0 && max(nsx, sx) >= 0){puts("NO"); return 0;}
            sx = nsx;
        }else{
            int nsy = sy + cards[i].sc.fr;
            //check
            if(min(nsy, sy) <= 0 && max(nsy, sy) >= 0){puts("NO"); return 0;}
            sy = nsy;
            nsy = sy - cards[i].sc.sc;
            //check
            if(min(nsy, sy) <= 0 && max(nsy, sy) >= 0){puts("NO"); return 0;}
            sy = nsy;
        }
    }
    puts("YES");
    printf("(%d, %d)\n", sx, sy);
}
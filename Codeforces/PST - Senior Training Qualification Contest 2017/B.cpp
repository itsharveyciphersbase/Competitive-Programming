#include<bits/stdc++.h>

using namespace std;

int cases = 1;
int n, a, b, c, H[1000001];

void conv(int x){
    a = b = c = 0;
    for(int i = 0; i < 8; ++i){
        if(x & (1 << i))
            a ^= (1 << i);
    }
    for(int i = 8; i < 16; ++i){
        if(x & (1 << i))
            b ^= (1 << i);
    }
    for(int i = 16; i < 24; ++i){
        if(x & (1 << i))
            c ^= (1 << i);
    }
    b = (b >> 8);
    c = (c >> 16);
}



int main(void){
    freopen("highlight.in", "r", stdin);
    scanf("%d", &n);
    while(n --){
        string cur;
        printf("Case %d:\n", cases++);
        int p;
        scanf("%d", &p);
        vector<int> x(3, 0);
        scanf("%d %d %d", &x[0], &x[1], &x[2]);
        for(int i = 0; i < p; ++i){
            scanf("%d", &H[i]);
        }
        int pages = 0;
        int ind = 0;
        getline(cin, cur);
        while(pages < 3){
            getline(cin, cur);
            cout << cur << "\n";
            string body = "";
            while(body.size() < x[pages]){
                getline(cin, cur);
                body += cur;
            }
            // cout << body;
            for(int i = 0; i < x[pages]; ++i){
                if(ind < p)conv(H[ind++]);
                else continue;
                if((a > 85 && pages == 2)||( b > 85 && pages == 1)|| (c > 85 && pages == 0))
                    printf("%c", body[i]);
            }
            cout << "\n";
            getline(cin, cur);
            cout << cur << "\n";
            pages++;
            ind = 0;
        }
    }
}

#include<bits/stdc++.h>

using namespace std;

int main(void){
    int n, m;
    scanf("%d %d", &n, &m);
    string in;
    cin >> in;
    int l, r;
    char c1, c2;
    for(int i = 0; i < m; ++i){
        scanf("%d %d %c %c", &l, &r, &c1, &c2);
        l--, r--;
        for(int j = l; j <= r; ++j){
            if(in[j] == c1)
                in[j] = c2;
        }
    }
    cout << in << "\n";
}
#include<bits/stdc++.h>

using namespace std;
int po = 0, ne = 0, n, x, y;
int main(void){
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> x >> y;
        if(x < 0)
            ne ++;
        else
            po ++;
    }
    if(min(ne, po) < 2){
        puts("Yes");
    }else puts("No");
}
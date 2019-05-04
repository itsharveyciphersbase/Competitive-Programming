#include<bits/stdc++.h>
using namespace std;

int main(void){
    int testcases;
    scanf("%d", &testcases);
    while(testcases--){
        int n, tmp, a = 0, b = 0;
        scanf("%d", &n);
        for(int i = 0; i < n; ++i){
            scanf("%d", &tmp);
            if(tmp > 0){
                a ++;
            }else b ++;
        }
        if(!a || !b)a = max(a, b), b = max(a, b);
        printf("%d %d\n", min(a, b), max(b, a));
    }
}
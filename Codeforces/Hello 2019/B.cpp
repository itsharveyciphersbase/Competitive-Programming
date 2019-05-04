#include<bits/stdc++.h>
using namespace std;

int arr[15], n;

bool rec(int i, int nw){
    if(i == n){
        return (nw%360) == 0;
    }
    return rec(i + 1, nw + arr[i]) || rec(i + 1, nw - arr[i]);
}

int main(void){
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    if(rec(0, 0))puts("YES");
    else puts("NO");
}
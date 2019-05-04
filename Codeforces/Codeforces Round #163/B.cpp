#include<bits/stdc++.h>
using namespace std;


int main(void){
    int n, t;
    cin >> n >> t;
    string q;
    cin >> q;
    while(t--){
        for(int i = 1; i < n; ++i){
            if(q[i] == 'G' && q[i - 1] == 'B'){
                swap(q[i], q[i - 1]);
                ++i;
            }
        }
    }
    cout << q;
}
#include<bits/stdc++.h>

using namespace std;

int main(void){
    long long s, d1, d2, z;
    cin >> s >> d1 >> d2 >> z;
    long long dd = d1 + d2;
    for(int i = 0; i < 9000001; ++i){
        if(int(((dd * i) + s) % z) == 0){
            cout << int(((dd * i) + s) / z);
            return 0;
        }else if(int(((dd * i) + s + d1) % z) == 0){
            cout << int(((dd * i) + s + d1) / z);
            return 0;
        }
    }
    cout << "-1";
}
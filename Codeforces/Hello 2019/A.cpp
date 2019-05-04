#include<bits/stdc++.h>
using namespace std;

int main(void){
    string in, tmp;
    cin >> in;
    for(int i = 0; i < 5; ++i){
        cin >> tmp;
        if(tmp[0] == in[0] || in[1] == tmp[1]){
            puts("YES");
            return 0;
        }
    }
    puts("NO");
}
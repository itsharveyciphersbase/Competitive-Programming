#include<bits/stdc++.h>

using namespace std;

int main(void){
    int a, b, c;
    cin >> a >> b >> c;
    int i = 0, times = 10000001;
    while(i < times){
        if(i && c == a / b){
            cout << i << "\n";
            return 0;
        }
        a %= b;
        a *= 10;
        i++;
    }
    puts("-1");
}
#include <bits/stdc++.h>

using namespace std;
int SquareDigitSum(int i){
    int ret = 0;
    while(i){
        ret += (i % 10) * (i % 10);
        i /= 10;
    }
    return ret;
}

int main(void) {
    for(int i = 10; i < 100; ++i){
        if(i - SquareDigitSum(i) <= -63)
            cout << i << " " << SquareDigitSum(i) << " " << i - SquareDigitSum(i) << "\n";
    }
}
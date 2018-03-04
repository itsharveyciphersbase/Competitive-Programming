#include<bits/stdc++.h>

using namespace std;

int zeroesAtTheEnd(long long num){
    int cn = 0;
    while(!(num % 10) && num){
        num /= 10;
        cn ++;
    }
    return cn;
}

int FirstNonZero(long long num){
    while(!(num % 10) && num){
        num /= 10;
    }
    return num % 10;
}


int main(void){
    long long n;
    int k;
    cin >> n >> k;
    while(zeroesAtTheEnd(n) < k){
        int tmp = FirstNonZero(n);
        for(int i = 1; i <= 10; ++i){
            if(zeroesAtTheEnd(i * tmp)){
                n *= i;
                break;
            }
        }
    }
    cout << n;
}

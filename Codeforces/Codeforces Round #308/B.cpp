#include<bits/stdc++.h>

using namespace std;

long long int arr[11];

int main(void) {
    arr[1] = 9;
    for (int i = 2; i < 11; ++i) {
        arr[i] = arr[i-1] *10;
    }
    for (int l = 1; l < 11; ++l) {
        arr[l] *= l;
    }
    string xx;
    cin >> xx;
    long long int cnt = 0;
    for (int j = 1; j < xx.size(); ++j) {
        cnt += arr[j];
    }
    long long int x ;
    stringstream stream;
    stream << xx;
    stream >> x;
    int k = 1;
    while(k * 10 <= x){
        k *= 10;
    }
    cnt += ((x- k + 1) * xx.size());
    cout << cnt <<endl;
}

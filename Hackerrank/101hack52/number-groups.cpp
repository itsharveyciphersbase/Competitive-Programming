#include <bits/stdc++.h>

using namespace std;

long sumOfGroup(int k) {
    // Return the sum of the elements of the k'th group.
    return (long) k * k * k;
}

int main() {
    int k;
    cin >> k;
    long answer = sumOfGroup(k);
    cout << answer << endl;
    return 0;
}
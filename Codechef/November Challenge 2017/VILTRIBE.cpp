#include <bits/stdc++.h>

using namespace std;
string arr;

int main(void) {
    int testcases;
    scanf("%d", &testcases);
    while (testcases--) {
        cin >> arr;
        int cn = 0, ansA = 0, ansB = 0, last = -1;
        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] == 'A') {
                if (last == 1) {
                    ansA += cn;
                }
                cn = 0;
                last = 1;
                ansA++;
            } else if (arr[i] == 'B') {
                if (last == 2) {
                    ansB += cn;
                }
                cn = 0;
                last = 2;
                ansB++;
            } else {
                cn++;
            }
        }
        printf("%d %d\n", ansA, ansB);
    }
}
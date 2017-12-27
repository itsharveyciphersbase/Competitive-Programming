#include<bits/stdc++.h>

using namespace std;
int cutsNeeded[100001];

int main(void){
  freopen("cake.in", "r", stdin);
    int test, n, cuts = 0, pieces = 1;
    for (int i = 1; i < 100001; ++i) {
        cutsNeeded[i] = cuts;
        if (i == pieces)cuts++, pieces += (cuts);
    }
    scanf("%d", &test);
    while (test--) {
        scanf("%d", &n);
        printf("%d\n", cutsNeeded[n]);
    }
}

#include<bits/stdc++.h>
using namespace std;
int A[150], B[150];
int main(void){
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
      scanf("%d", &A[i]);
    }
    for (int i = 0; i < n; i++) {
      scanf("%d", &B[i]);
    }
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
      maxi = max(maxi, A[i] * 20 - B[i] * 10);
    }
    printf("%d\n", maxi > 0 ? maxi : 0);
  }
}

#include<bits/stdc++.h>
using namespace std;
int main(void){
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
    long long n, k;
    cin >> n >> k;
    long long temp = n / k;
    bool ans = (temp % k == 0);
    if(ans) puts("NO");
    else puts("YES");
  }
}

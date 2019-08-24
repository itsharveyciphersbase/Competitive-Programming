#include <bits/stdc++.h>
using namespace std;

int arr[101];
int main(void){
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    bool cant = false;
    for(int i = 0; i < n; ++i){
      scanf("%d", &arr[i]);
      if(i > 0 && !cant){
        int temp = max(arr[i] - k, 0);
        if(arr[i - 1] >= temp){
          m += arr[i - 1] - temp;
        }else{
          int need = temp - arr[i - 1];
          if(need > m){
            cant = true;
          }else{
            m -= need;
          }
        }
      }
    }
    if(cant){
      puts("NO");
    }else{
      puts("YES");
    }
  }
}

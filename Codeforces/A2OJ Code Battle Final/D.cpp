#include <bits/stdc++.h>

using namespace std;

int arr[1000001], n, o;
set<int> taken;

int main(void) {
  scanf("%d", &n);
  long long seed = 1;
  for(int i = 0; i < n; ++i){
    scanf("%d", arr + i);
  }
  scanf("%d", &o);
  for(int i = 0; i < n; ++i){
    if(!taken.count(arr[i]))
      taken.insert(arr[i]), seed *= arr[i], seed %= o;
  }
  seed--;
  if(seed % o)puts("NO");
  else puts("YES");
}

#include<bits/stdc++.h>

using namespace std;

int main(void){
  int n, h;
  scanf("%d %d", &n, &h);
  vector<pair<int, int>> v(n);
  for(int i = 0; i < n; ++i){
    scanf("%d %d", &v[i].first, &v[i].second);
  }
  sort(v.rbegin(), v.rend());
  pair<int, int> val1 = v[0];
  v[0].first = v[0].second = -1;
  for(int i = 0; i < n; ++i){
    swap(v[i].first, v[i].second);
  }
  sort(v.rbegin(), v.rend());
  int c = 0;
  for(int i = 0; i < n - 1 && v[i].first >= val1.first && h > 0; ++i, ++c, h -= v[i - 1].first);
  while(h > 0){
    if(h - val1.second > 0){
      c ++; h -= val1.first;
    }else c ++, h -= val1.second;
  }
  printf("%d\n", c);
}

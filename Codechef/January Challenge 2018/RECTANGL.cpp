#include<bits/stdc++.h>

using namespace std;

int main(void){
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
    vector<int> v(4);
    scanf("%d %d %d %d", &v[0], &v[1], &v[2], &v[3]);
    sort(v.begin(), v.end());
    if(v[0] == v[1] && v[2] == v[3])
      puts("YES");
    else puts("NO");
  }
}

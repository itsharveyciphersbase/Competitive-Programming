#include<bits/stdc++.h>

using namespace std;
int s[6555], e[5555];

int main(void){
  int n, x, m, z;
  cin >> n >> m;
  for(int i = 0; i < n; ++i){
    cin >> x >> z;
    s[x]++;
    e[z]++;
  }
  int nw = 0;
  for(int i = 0; i < m; ++i){
    nw -= e[i];
    nw += s[i];
    if(!nw){
      puts("NO");
      return 0;
    }
  }
  puts("YES");
}

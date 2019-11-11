#include<bits/stdc++.h>

using namespace std;

int main(void){
  int n, a, b;
  int x, y;
  cin >> n >> a >> b;
  for(int i = 0; i * a <= n; ++i){
    int ax = i * a;
    int by = n - ax;
    int y = (by / b);
    if((a * i) + (b * y) == n){
      puts("YES");
      cout << i << " " << y << "\n";
      return 0;
    }
  }
  puts("NO");
}

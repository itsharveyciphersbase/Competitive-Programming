#include<bits/stdc++.h>
using namespace std;

map<int, int> app;

int main(void){
  int n, maxi = 0, x;
  cin >> n;
  for(int i = 0; i < n; ++i){
    cin >> x;
    app[x]++;
    maxi = max(maxi, x);
  }
  if(app[maxi] % 2)
    puts("Conan");
    else puts("Agasa");
}

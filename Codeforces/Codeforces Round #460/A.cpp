#include<bits/stdc++.h>
using namespace std;

int main(void){
  int n;
  double kilo, x, z, ans = DBL_MAX;
  cin >> n >> kilo;
  for(int i = 0; i < n; ++i){
    cin >> x >> z;
    ans = min(ans, x * kilo / z);
  }
  cout << setprecision(10) << ans << endl;
}

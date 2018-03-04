#include<bits/stdc++.h>

using namespace std;

long double arr[10001];

int main(void){
  long long n, x, fac2, dia;
  long double r;
  cin >> n >> r;
  fac2 = (2 * r) * (2 * r);
  dia = 2 * r;
  for(int i = 0; i < n;++i){
    cin >> x;
    long double maxi = 0.0;
    int id = -1;
    for(int j = x - dia; j <= x + dia; ++j){
      if(j < 1 || j > 1000) continue;
      if(arr[j])maxi = max(maxi, arr[j] + sqrt(fac2 - (abs(j - x) * abs(j - x))));
    }
    if(maxi > 0.0){
      arr[x] = maxi;
      cout << setprecision(12) << maxi << " ";
    }else{
      cout << r << " ";
      arr[x] = r;
    }
  }
}

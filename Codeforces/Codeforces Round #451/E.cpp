#include<bits/stdc++.h>

using namespace std;

map<int, int> sqr;

int check(int x){
  if(sqr.count(x))
    return 1;
  else return 0;
}

int main(void){
  for(int i = 0;i < 41624; ++i){
    sqr[i * i] = i;
  }
  int n;
  scanf("%d", &n);
  vector<int> arr(n);
  vector<int> per;
  vector<int> imp;
  int perfect = 0, imperfect = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    if(check(arr[i]))
      perfect++, per.push_back(arr[i]);
    else
      imperfect++, imp.push_back(arr[i]);
  }
  if(perfect == imperfect){
    cout << "0\n";
    return 0;
  }
  if(perfect < n / 2){
    int need = (n / 2) - perfect;
    vector<int> steps;
    for(int i : imp){
      int x = sqr.lower_bound(i)->first, y = sqr.upper_bound(i)->first;
      steps.push_back(min(abs(i - x), abs(y - i)));
    }
    sort(steps.begin(), steps.end());
    long long ans = 0;
    for(int i = 0; i < need; ++i)
      ans += steps[i];
    cout << ans << "\n";
  }else{
    int need = (n / 2) - imperfect;
    vector<int> steps;
    for(int i : per){
      for(int j = 1; j <= 10000; ++j){
        if(i - j > -1 && !check(i - j)){
          steps.push_back(j);
          break;
        }else if(i + j && !check(i + j)){
          steps.push_back(j);
          break;
        }
      }
    }
    sort(steps.begin(), steps.end());
    long long ans = 0;
    for(int i = 0; i < need; ++i)
      ans += steps[i];
    cout << ans << "\n";
  }
}

#include<bits/stdc++.h>
using namespace std;

int main(void){
  int i, c = 0;
  vector<int> v;
  for(i = 0; c < 10000; ++i){
    int ii = i, sum = 0;
    while(ii){
      sum += (ii % 10);
      ii /= 10;
    }
    if(sum == 10){
      c++;
      v.push_back(i);
    }
  }
  cin >> i;
  i--;
  cout << v[i];
}

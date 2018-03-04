#include <bits/stdc++.h>

using namespace std;

int n;

int main(void) {
  vector<int> mx, mn;
  scanf("%d", &n);
  if(n == 1){
    mx.push_back(1);
    mn.push_back(9);
  }else if(n >= 2){
    mx.push_back(0);
    mx.push_back(5);
    for(int i = 2; i < n; ++i)
      mx.push_back(9);
    mn.push_back(9);
    for(int i = 2; i < n; ++i)
      mn.push_back(0);
    mn.push_back(1);
  }
  reverse(mx.begin(), mx.end());
  reverse(mn.begin(), mn.end());
  for(int i : mx)
    printf("%d", i);
  putchar('\n');
  for(int i : mn)
    printf("%d", i);
  putchar('\n');
  int mnpow = 0, mxpow = 0;
  int mnsome = 0, mxsome = 0;
  for(int i : mx)
    mxpow += (i * i);
  for(int i : mn)
    mnpow += (i * i);
  for(int i = n - 1, val = 1; mxsome < mxpow && i > -1; --i, val *= 10){
    mxsome += (mx[i] * val);
    mx[i] = 0;
  }
  mxsome -= mxpow;
  for(int i = n - 1; mxsome && i > -1; --i){
    mx[i] = mxsome % 10;
    mxsome /= 10;
  }
  for(int i : mx)
    printf("%d", i);
  putchar('\n');
  if(n == 2){
    puts("-63");
  }else{
    for(int i = 3; i < n; ++i){
      putchar('9');
    }
    if(n == 1)puts("-72");
    else puts("27");
  }
}

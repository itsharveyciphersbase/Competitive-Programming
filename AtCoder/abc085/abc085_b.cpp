#include<bits/stdc++.h>

using namespace std;

int main(void){
  int n, x;
  scanf("%d", &n);
  set<int> v;
  while(n --){
    scanf("%d", &x);
    v.insert(x);
  }
  printf("%d\n", int(v.size()));
}

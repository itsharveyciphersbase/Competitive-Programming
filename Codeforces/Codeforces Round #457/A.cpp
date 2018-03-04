#include<bits/stdc++.h>
using namespace std;

int prevH(int h){
  if(h == 0)
    return 23;
  return h - 1;
}

int prevM(int m){
  if(m == 0)
    return 59;
  return m - 1;
}

bool check(int h, int m){
  return h % 10 == 7 || (h / 10) % 10 == 7 || m % 10 == 7 || (m / 10) % 10 == 7;
}


int main(void){
  int x, h, m;
  cin >> x >> h >> m;
  while(true){
    if(check(h, m)){
      puts("0");
      return 0;
    }
    for(int i = 1; ;++i){
      for(int j = 0; j < x; ++j){
        int nM = prevM(m);
        if(!m)
          h = prevH(h);
        m = nM;
      }
      if(check(h, m)){
        printf("%d\n", i);
        return 0;
      }
    }
  }
}

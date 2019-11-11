#include<bits/stdc++.h>

using namespace std;

int main(void){
  long long X, Y;
  cin >> X >> Y;
  long long times = 1;
  for(int i = 0; ; ++i){
    if(X * times > Y){
      printf("%d\n", i);
      return 0;
    }else times *= 2LL;
  }
}

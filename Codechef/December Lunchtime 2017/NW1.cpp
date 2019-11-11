#include<bits/stdc++.h>

using namespace std;

int main(void){
  int testcases;
  cin >> testcases;
  while(testcases--){
    vector<int> v (7, 0);
    string in;
    int n, s = -1;
    cin >> n >> in;
    if(in[0] == 's' || in[0] == 't'){
      if(in[1] == 'u'){
        if(in[0] == 's')s = 6;
        else s = 1;
      }
      if(in[1] == 'a')s = 5;
      if(in[1] == 'h')s = 3;
    }else if(in[0] == 'w'){
      s = 2;
    }else if(in[0] == 'm'){
      s = 0;
    }else if(in[0] == 'f'){
      s = 4;
    }
    while(n -- > 0){
      v[s ++]++;
      s %= 7;
    }
    for(int i : v)
      printf("%d ", i);
    putchar('\n');
  }
}

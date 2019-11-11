#include<bits/stdc++.h>
using namespace std;

int main(void){
  int a, b;
  cin >> a >> b;
  string input;
  cin >> input;
  set<char> mem;
  for(int i = 0; i < a; ++i){
    mem.insert(input[i]);
  }
  if(b > a){
    cout << input[i];
    while(b > a){
      for(char x : mem){
        cout << x;
        break;
      }
      b--;
    }
  }else{
    int ii = 0;
    for(int i = 0; i < min(a, b); ++i){
      for(char x : mem){
        if(input[i] < x){
          ii = i;
          break;
        }
      }
    }
    for(int i = 0; i < ii; ++i){
      cout << input[i];
    }
    for(char x : mem){
      if(input[ii] < x){
        cout << x;
        break;
      }
    }
    for(int i = ii + 1; i < b; ++i){
      for(char x : mem){
        cout << x;
        break;
      }
    }
  }
}

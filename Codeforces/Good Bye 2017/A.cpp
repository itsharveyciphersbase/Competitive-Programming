#include<bits/stdc++.h>

using namespace std;

bool isvowel(char x){
  return x == 'a' || x == 'e' || x == 'u' || x == 'i' || x == 'o';
}

int main(void){
  string in;
  cin >> in;
  int count = 0;
  for(int i = 1; i <= in.size(); ++i){
    if(isvowel(in[i - 1])){
      count ++;
    }else if((in[i - 1] >= '0' && in[i - 1] <= '9')){
      int num = (in[i - 1] - '0');
      if(num % 2)
        count++;
    }
  }
  cout << count;
}

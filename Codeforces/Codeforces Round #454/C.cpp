#include<bits/stdc++.h>

using namespace std;

int over = 0;
set<int> may;

int main(void){
  for(int i = 0; i < 26; ++i)
    may.insert(i);
  int n;
  cin >> n;
  while(n --){
    char action;
    string input;
    cin >> action >> input;
    if(action == '?'){
      if(may.size() == 1 && !may.count(input[0] - 'a'))
        over++;
      else may.erase(input[0] - 'a');
    }else if(action == '!'){
      if(may.size() == 1){
        over++;
      }else{
        vector<int> v(26, 0);
        for(int i = 0; i < input.size(); ++i){
          v[input[i] - 'a']++;
        }
        for(int j = 0; j < 26; ++j){
          if(!v[j] && may.count(j)){
            may.erase(j);
          }
        }
      }
    }else{
      vector<int> v(26, 0);
      for(int i = 0; i < input.size(); ++i){
        v[input[i] - 'a']++;
      }
      for(int j = 0; j < 26; ++j){
        if(v[j] && may.count(j)){
          may.erase(j);
        }
      }
    }
  }
  cout << over << "\n";
}

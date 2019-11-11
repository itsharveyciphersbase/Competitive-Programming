#include<bits/stdc++.h>

using namespace std;
char s[5021];
vector<int> v;

int main(void){
  scanf("%s", s);
  for(int i = 0; s[i] != '\0'; ++i){
    if(!(i % 2)){
      v.push_back(s[i]-'0');
    }else if(s[i] == '*'){
      v.push_back(-1);
    }else v.push_back(-2);
  }
  int ans = 0;
  for(int i = 0; i < v.size(); ++i)
    if(i % 2)
      ans+= (v[i] * v[i++ + 1]);
    else ans += v[i];
  int maxi = 0;
  for(int i = 1; i < v.size() - 1; i+= 2)
    maxi = max(maxi, )
  printf("%d\n", ans);
}

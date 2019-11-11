include<bits/stdc++.h>

using namespace std;

int main(void){
  int n, m;
  cin >> n >> m;
  string in;
  cin >> in;
  if(in.size() == n + m + 1 && in[n] != '-'){
    puts("No");
    return 0;
  }
  for(int i = 0; i < in.size(); ++i){
    if(i == n)continue;
    if(!isdigit(in[i])){
      puts("No");
      return 0;
    }
  }
  if(in.size() != n + m + 1)
    puts("No");
  else puts("Yes");
}

#include <bits/stdc++.h>
using namespace std;

vector< pair<int, int> > parties, ans;

int main(void){
  int p, t, all = 0, alice = 0, col = 0;
  scanf("%d", &p);
  for(int i = 0; i < p; ++i){
    scanf("%d", &t);
    all += t;
    if(i > 0){
      parties.push_back(make_pair(t, i + 1));
    }else if(i == 0) all = alice = col = t;
  }
  sort(parties.rbegin(), parties.rend());
  ans.push_back(make_pair(alice ,1));
  for(auto x : parties){
    if(col > all / 2){
      printf("%d\n", (int)ans.size());
      for(auto z : ans){
        printf("%d ", z.second);
      }
      return 0;
    }else if(x.first <= alice / 2){
      ans.push_back(x);
      col += x.first;
    }
  }
  if(col > all / 2){
    printf("%d\n", (int)ans.size());
    for(auto z : ans){
      printf("%d ", z.second);
    }
    return 0;
  }
  puts("0");
}

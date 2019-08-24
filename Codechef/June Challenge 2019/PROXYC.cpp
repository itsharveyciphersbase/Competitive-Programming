#include "bits/stdc++.h"
using namespace std;

int main(void){
  string attendance;
  int testcases, days;
  cin >> testcases;
  while (testcases--) {
    cin >> days >> attendance;
    int present_count = 0, present_target = ceil(days * 0.75), steps = 0;
    for(int i = 0; i < days; ++i){
      present_count += (attendance[i] == 'P');
    }
    for(int i = 2; i < days - 2; ++i){
      if(present_count >= present_target)
        break;
      if(attendance[i] == 'A' && (attendance[i - 2] == 'P' || attendance[i - 1] == 'P') && (attendance[i + 2] == 'P' || attendance[i + 1] == 'P'))
        steps ++, present_count++;
    }
    if(present_count >= present_target)
      cout << steps << "\n";
    else cout << "-1\n";
  }
}

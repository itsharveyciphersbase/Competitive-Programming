#include <bits/stdc++.h>
using namespace std;

int main(void) {
   int testcases, cases = 1;
   cin >> testcases;
   while(testcases--){
      int shield, current = 0, hacks = 0;
      cin >> shield;
      string program;
      cin >> program;
      vector<int> v (program.size(), 0);
      for(int i = 0, s = 1; i < program.size(); ++i){
         if(program[i] == 'S')
            current += s, v[i] = s;
         else s *= 2;
      }
      while (current > shield) {
         int i = program.size() - 1;
         for(; i > 0; --i){
            if(v[i] != 0 && v[i - 1] == 0){
               v[i - 1] = v[i] / 2;
               v[i] = 0;
               current -= v[i - 1];
               hacks ++;
               break;
            }
         }
         if(i == 0)break;
      }
      cout << "Case #" << (cases++) << ": ";
      if(current <= shield)
         cout << hacks << "\n";
      else cout << "IMPOSSIBLE\n";
   }
}

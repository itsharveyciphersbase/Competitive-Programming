#include<bits/stdc++.h>
using namespace std;

int main(void){
   int n, mod = 998244353;
   cin >> n;
   string input;
   cin >> input;
   int pre = 1, suf = 1;
   for(int i = 1; i < input.size(); ++pre, ++i){
      if(input[i] != input[i - 1])break;
   }
   for(int i = input.size() - 1; i > -1; ++suf, --i){
      if(input[i] != input[i - 1])break;
   }
   if(pre == n){
      cout << n % 998244353 << endl;
   }else{
      if(input[0] == input[n - 1]){
         cout << (pre + 1 + suf + (long long)pre * suf) % mod << endl;
      }else{
         cout << (pre + 1 + suf) % mod << endl;
      }
   }
}

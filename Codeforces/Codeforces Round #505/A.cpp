#include <bits/stdc++.h>

using namespace std;

int arr[26];

int main(void){
   int n;
   cin >> n;
   string in;
   cin >> in;
   for(int i = 0; i < in.size(); ++i){
      arr[in[i] - 'a'] ++;
   }
   int ans = 0;
   for(int i = 0; i < 26; ++i){
      if(arr[i] > 1)ans = 1;
   }
   if(ans == 1){
      puts("Yes");
   }else puts("No");
}

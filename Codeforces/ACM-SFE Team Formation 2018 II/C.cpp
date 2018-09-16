#include <bits/stdc++.h>

using namespace std;

int arr[26], cases = 1;

int main(void){
   freopen("piano.in", "r", stdin);
   int testcases;
   scanf("%d", &testcases);
   while (testcases--) {
      memset(arr, 0, sizeof arr);
      string in;
      cin >> in;
      for(int i = 0; i < in.size(); ++i){
         arr[in[i] - 'a']++;
      }
      printf("Case %d:\n", cases++);
      for(int i = 0; i < 26; ++i){
         char tmp = 'a'; tmp += i;
         printf("%c %d\n", tmp, arr[i]);
      }
   }
}

#include <bits/stdc++.h>

using namespace std;

int arr[10];

int main(void){
   freopen("self.in", "r", stdin);
   int testcases;
   scanf("%d", &testcases);
   while (testcases--) {
      memset(arr, 0, sizeof arr);
      string in;
      cin >> in;
      bool f = 1;
      for(int i = 0; i < in.size(); ++i){
         arr[in[i] - '0'] ++;
      }
      for(int i = 0; i < in.size(); ++i){
         if(arr[i] != in[i] - '0')f = 0;
      }
      if(f)puts("self-describing");
      else puts("not self-describing");
   }
}

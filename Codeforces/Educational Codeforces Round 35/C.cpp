#include<bits/stdc++.h>

using namespace std;

int arr[501];

int main(void){
  int a, b, c;
  cin >> a >> b >> c;
  for(int i = 1; i <= 101; ++i){
    for(int j = 1; j <= 101; ++j){
      for (int k = 1; k <= 101; k++) {
        memset(arr, 0, sizeof arr);
        int A = i, B = j, C = k;
        while(A < 501 || B < 501 || C < 501){
          if(A < 501){
            arr[A]++;
            A += a;
          }
          if(B < 501){
            arr[B]++;
            B += b;
          }
          if(C < 501){
            arr[C]++;
            C += c;
          }
        }
        for(int i = 1; i < 501; ++i){
          if(!arr[i])break;
          if(i == 500){
            puts("YES");
            return 0;
          }
        }
      }
    }
  }
  puts("NO");
}

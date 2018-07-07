#include<bits/stdc++.h>
using namespace std;

int arr[100001];
int dic[256];

int main(void){
   memset(dic, -1, sizeof dic);
   int n, k;
   scanf("%d %d", &n, &k);
   for(int i = 0; i < n; ++i){
      scanf("%d", &arr[i]);
      if(dic[arr[i]] == -1){
         int color = -1;
         for(int j = max(0, arr[i] - k + 1); j <= arr[i]; ++j){
            if(color != -1){
               dic[j] = color;
            }else{
               if(dic[j] != -1 && arr[i] - dic[j] < k){
                  color = dic[j];
                  --j;
               }else if(dic[j] == -1 && arr[i] - j < k){
                  color = j;
                  --j;
               }
            }
         }
      }
   }
   for(int j = 0; j < n; ++j){
      printf("%d", dic[arr[j]]);
      if(j + 1 < n)putchar(' ');
      else puts("");
   }
}

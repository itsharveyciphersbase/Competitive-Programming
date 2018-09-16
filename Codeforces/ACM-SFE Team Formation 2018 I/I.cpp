#include<bits/stdc++.h>
using namespace std;

int main(void){
   int testcases;
   scanf("%d", &testcases);
   while(testcases--){
      int arr[100001], m, r, min, max, x, maxi = 0;
      int arrM[5];
      memset(arr, 0, sizeof arr);
      scanf("%d %d %d %d", &m, &r, &min, &max);
      for (int i = 0; i < m; i++) {
         scanf("%d", &arrM[i]);
      }
      for (int i = min; i <= max; i++) {
         for(int j = 0; j < m; ++j){
            if(i % arrM[j] != r)break;
            if(j == m - 1)
               printf("%d\n", i), maxi = 1;
         }
         if(maxi)break;
      }
      if(!maxi) puts("-1");
   }
}

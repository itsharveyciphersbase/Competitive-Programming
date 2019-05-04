#include<bits/stdc++.h>
using namespace std;

vector<int> A[200001], B[200001];
int nt[200001];
int main(void){
   int n, x, z;
   scanf("%d", &n);
   if(n == 3){
      puts("1 2 3");
      return 0;
   }
   for(int i = 1; i <= n; ++i){
      scanf("%d %d", &x, &z);
      A[i].push_back(x);
      A[i].push_back(z);
      B[x].push_back(z);
      B[z].push_back(x);
   }
   for(int i = 1; i <= n; ++i){
      if(A[i][0] == B[i][0] || A[i][0] == B[i][1]){
         nt[i] = A[i][0];
      }else {
         nt[i] = A[i][1];
      }
   }
   x = nt[1];
   printf("1");
   while(x != 1){
      printf(" %d", x);
      x = nt[x];
   }
   putchar('\n');
}

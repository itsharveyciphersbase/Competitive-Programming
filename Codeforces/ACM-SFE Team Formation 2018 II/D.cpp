#include <bits/stdc++.h>

using namespace std;

int cases = 1;

int main(void){
   freopen("sequence.in", "r", stdin); 
   int testcases;
   scanf("%d", &testcases);
   while (testcases--) {
      printf("Case %d:", cases++);
      string in1, in2;
      cin >> in1 >> in2;
      int i = 0, j = 0;
      while(i < in1.size() && j < in2.size()){
         if(in2[j] == in1[i])
            j ++;
         i ++;
      }
      if(j == in2.size())puts("YES");
      else puts("NO");
   }
}

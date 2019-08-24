#include<bits/stdc++.h>
using namespace std;

int main(void){
   int testcases;
   scanf("%d", &testcases);
   while(testcases--){
     int n, x; scanf("%d", &n);
     set<int> mem;
     map<int,int> memNum;
     long sum = 0;
     for(int i = 0; i < n; ++i){
       scanf("%d", &x);
       sum += x;
       mem.insert(x);
       if(!memNum.count(x))memNum[x] = i + 1;
     }
     if(sum % n == 0 && mem.count(sum / n)){
       printf("%d\n", memNum[sum / n]);
     }else puts("Impossible");
   }
}

#include<bits/stdc++.h>
using namespace std;

int main(void){
   int A = 0, B = 0, C = 0;
   bool a = false, b = false, c = false;
   string in;
   cin >> in;
   for(int i = 0; i < in.size(); ++i){
      for(int j = i + 1; j < in.size(); ++j){
         if((in[i] == 'b' && in[j] == 'a') || (in[i] == 'c' && in[j] == 'a') ||
         (in[i] == 'c' && in[j] == 'b')){
            puts("NO");
            return 0;
         }
      }
   }
   for(int i = 0; i < in.size(); ++i){
      if(in[i] == 'a'){
         A++;
      }else if(in[i] == 'b'){
         B++;
      }else{
         C++;
      }
   }
   if(C == B || C == A){
      puts("YES");
   }else puts("NO");
}

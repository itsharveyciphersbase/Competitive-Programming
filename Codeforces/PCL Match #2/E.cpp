#include<bits/stdc++.h>
using namespace std;

string recon(string x){
   string out = "";
   for(int i = 0; i < x.size(); ++i){
      if(x[i] != out[out.size() - 1]){
         out += x[i];
      }
   }
   return out;
}

int main(void){
   string in;
   cin >> in;
   in = recon(in);
   int s = 0, e = in.size() - 1;
   while(s < e){
      if(in[s] != in[e]){
         puts("NO");
         return 0;
      }else s ++, e --;
   }
   puts("YES");
}

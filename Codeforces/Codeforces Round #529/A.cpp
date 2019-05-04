#include<bits/stdc++.h>
using namespace std;

int main(void){
   int n;
   cin >> n;
   string input;
   cin >> input;
   int i = 0, inc = 1;
   while(i < n){
      cout << input[i];
      i += inc++;
   }
}

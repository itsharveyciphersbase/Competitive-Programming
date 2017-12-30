#include<bits/stdc++.h>

using namespace std;

string A, B;

int main(void){
  cin >> A >> B;
  string out = "";
  int stA = 0, stB = 0;
  out += A[stA++];
  while(1){
    if(stA == A.size()){
      out += B[stB];
      break;
    }if(A[stA] < B[stB]){
      out += A[stA++];
    }else{
      out += B[stB];
      break;
    }
  }
  cout << out;
}

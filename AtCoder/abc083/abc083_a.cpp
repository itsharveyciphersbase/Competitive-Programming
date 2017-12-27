#include<bits/stdc++.h>

using namespace std;

int main(void){
  int A, B, C, D;
  cin >> A >> B >> C >> D;
  if(A + B == C + D){
    puts("Balanced");
  }else if(A + B > C + D){
    puts("Left");
  }else{
    puts("Right");
  }
}

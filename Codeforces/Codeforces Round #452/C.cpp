#include<bits/stdc++.h>

using namespace std;

int main(void){
  int n;
  cin >> n;
  if(n % 4 == 0){
    printf("0 \n%d", n / 2);
    for(int i = 1, j = n, k = 0; i < j; i ++, j--, k = !k)
      if(k)printf(" %d %d", i, j);
      putchar('\n');
  }else if(n % 2 == 0){
    printf("1 \n%d", n / 2);
    for(int i = 1, j = n, k = 0; j - i > 2; i ++, j--, k = !k)
      if(k)printf(" %d %d", i, j);
    printf(" %d\n", n / 2);
  }else{
      if((n - 1) % 4 == 0){
        printf("1 \n%d 1", n / 2 + 1);
        for(int i = 2, j = n, k = 0; i < j; i ++, j--, k = !k)
          if(k)printf(" %d %d", i, j);
          putchar('\n');
      }else{
        printf("0 \n%d 1", n / 2 + 1);
        for(int i = 2, j = n, k = 1; j - i > 2; i ++, j--, k = !k)
          if(k)printf(" %d %d", i, j);
        printf(" %d\n", n / 2 + 1);
      }
  }
}

#include<bits/stdc++.h>

using namespace std;

int arr[200001];

int main(void){
  int n, k;
  scanf("%d %d", &n, &k);
  stack<int> tmp;
  int out = 0;
  for(int i = 0; i < k; ++i)
    scanf("%d", &arr[i]);
  for(int i = 0; i < k; ++i){
    if(tmp.empty() || arr[i] < tmp.top()){
      tmp.push(arr[i]);
    }else if(tmp.top() == out + 1){
      while(!tmp.empty() && tmp.top() == out + 1){
        tmp.pop();
        out++;
      }
      i --;
    }else{
      puts("-1");
      return 0;
    }
  }
  while(!tmp.empty() && tmp.top() == out + 1){
    tmp.pop();
    out++;
  }
  for(int i = 0; i < k; ++i)
    printf("%d ", arr[i]);
  while(out < n){
    if(tmp.empty()){
        for(int i = n; i > out; --i)
          printf("%d ", i);
        return 0;
    }else{
      while(!tmp.empty() && tmp.top() != out + 1){
        printf("%d ", tmp.top() - 1);
        tmp.push(tmp.top() - 1);
      }
    }
    while(!tmp.empty() && tmp.top() == out + 1){
      tmp.pop();
      out++;
    }
  }
}

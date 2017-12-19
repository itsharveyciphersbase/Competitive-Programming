#include<bits/stdc++.h>

using namespace std;

int arr[200001], pt[200001], pt1[200001];

int main(void){
  int n;
  cin >> n;
  int iso = 0;
  for(int i = 0; i < n + 1; ++i){
    cin >> arr[i];
    if(i > 1 && arr[i] > 1 && arr[i - 1] > 1)
      iso++;
  }
  if(iso){
    puts("ambiguous");
    int j = 1;
    pt[j] = 0;
    for(int i = 0; i < n + 1; ++i){
      vector<int> v;
      int times = 0;
      while(times++ < arr[i]){
        v.push_back(j++);
      }
      for(int l = 0; l < arr[i + 1]; ++l){
        if(l % 2)pt[l + j] = v[0], pt1[l + j] = v[0];
        else pt1[l + j] = v[0], pt[l + j] = v.back();
      }
    }
    for(int i = 1; i < j; ++i){
      printf("%d ", pt[i]);
    }
    puts("");
    for(int i = 1; i < j; ++i){
      printf("%d ", pt1[i]);
    }
    puts("");
  }else{
    puts("perfect");
  }
}

#include<bits/stdc++.h>

using namespace std;
int arr[200009];
int nt[200009];

int main(void){
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; ++i){
    scanf("%d", &arr[i]);
    nt[i] = i + 1;
  }
  // length - (start - end) - number
  vector<pair<pair<pair<int,int>, int >, int> >  v;
  vector<int> len;
  int st = 0;
  for(int i = 1; i < n; ++i){
    if(arr[i] != arr[st])
      v.push_back(make_pair(make_pair(make_pair(st, i - 1), i - st), arr[st])), st = i, len.push_back(i - st);
  }
  v.push_back(make_pair(make_pair(make_pair(st, n - 1), n - st), arr[st])), len.push_back(i - st);
  sort(len.rbegin(), len.rend());
  sort(v.begin(), v.end());
  deque<pair<pair<pair<int,int>, int >, int>> tmp;
  int ind = 0, op = 0;
  for(int i = 0; i < v.size(); ++i){
    // cout << vv.first.second << " " << vv.first.first.first << " " << vv.first.first.second << " " << vv.second << "\n";
    if(v[i].first.second == len[ind]){
      op++;
      ind++;
      if(!tmp.empty() && i + 1 < v.size()){

      }
    }else{
      tmp.push_back(v[i]);
    }
  }
}

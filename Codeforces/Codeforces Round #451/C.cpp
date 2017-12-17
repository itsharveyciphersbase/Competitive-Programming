#include<bits/stdc++.h>

using namespace std;
map<string, int> phone;
vector<pair<int, string> > arr[2001];
int main(void){
  int n;
  cin >> n;
  int ind = 1;
  for(int i = 0; i < n; ++i){
    string name;
    cin >> name;
    int m;
    cin >> m;
    string num;
    if(phone.count(name) == 0){
      phone[name] = ind++;
    }
    int cur = phone[name];
    for(int j = 0; j < m; ++j){
      cin >> num;
      arr[cur].push_back(make_pair(num.size() ,num));
    }
  }
  cout << phone.size() << endl;
  for(auto ph : phone){
    cout << ph.first << " ";
    int cur = ph.second;
    sort(arr[cur].rbegin(), arr[cur].rend());
    set<string> dic;
    vector<string> out;
    for(pair<int, string> x : arr[cur]){
      if(dic.count(x.second) == 0){
        out.push_back(x.second);
        for(int i = 0; i < x.second.size(); ++i){
          dic.insert(x.second.substr(i));
        }
      }
    }
    cout << out.size() << " ";
    for(auto x : out){
      cout << x << " ";
    }
    cout << '\n';
  }
}

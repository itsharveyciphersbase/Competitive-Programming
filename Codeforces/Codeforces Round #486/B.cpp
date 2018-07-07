#include<bits/stdc++.h>
using namespace std;

int n;

bool is_sub(string a, string b){
   for(int i = 0; i < b.size(); ++i){
      for(int j = 0; j < a.size(); ++j){
         if(a[j] != b[i + j])break;
         if(j == a.size() - 1)
            return true;
      }
   }
   return false;
}

int main(void){
   cin >> n;
   int done = 1;
   vector<pair<int, string> > arr(n);
   for(int i = 0; i < n; ++i){
      cin >> arr[i].second;
      arr[i].first = arr[i].second.size();
   }
   sort(arr.begin(), arr.end());
   for(int i = 0; i < n; ++i){
      for(int j = i + 1; j < n; ++j){
         done &= is_sub(arr[i].second, arr[j].second);
      }
   }
   if(!done)puts("NO");
   else{
      puts("YES");
      for(int i = 0; i < n; ++i)
         cout << arr[i].second << "\n";
   }
}

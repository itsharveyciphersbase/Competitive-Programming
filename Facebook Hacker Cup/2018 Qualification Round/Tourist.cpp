#include<bits/stdc++.h>
using namespace std;

int cases = 1;
int main(void){
   freopen("tourist.txt", "r", stdin);
   freopen("tourist_output.txt", "w", stdout);
   int testcases;
   cin >> testcases;
   while(testcases--){
      cout << "Case #" << cases++ << ":";
      int n, k;
      long long v;
      cin >> n >> k >> v;
      vector<pair<string, int> > ar (n);
      for(int i = 0; i < n; ++i){
         cin >> ar[i].first;
      }
      v = ((v - 1) * k)  % n;
      while(k --){
         ar[v].second = 1;
         v++;
         v %= n;
      }
      for(int i = 0; i < n; ++i){
         if(ar[i].second == 1)
            cout << " " << ar[i].first;
      }
      cout << "\n";
   }
}

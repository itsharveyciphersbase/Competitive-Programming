#include<bits/stdc++.h>
using namespace std;

pair<long long, pair<long long, long long> > A[1001];
int main(void){
   int n, k1, k2;
   cin >> n >> k1 >> k2;
   for(int i = 0; i < n; ++i){
      cin >> A[i].second.first;
   }
   for(int i = 0; i < n; ++i){
      cin >> A[i].second.second;
      A[i].first = abs(A[i].second.first - A[i].second.second);
   }
   int i = n - 1;
   while(k1 || k2){
      sort(A, A + n);
      if(k1 && k2){
         vector<pair<long long, long long> > v (4);
         v[0].first = abs(A[i].second.first + 1 - A[i].second.second), v[0].second = 0;
         v[1].first = abs((A[i].second.first - 1) - A[i].second.second), v[1].second = 1;
         v[2].first = abs(A[i].second.first - (A[i].second.second + 1)), v[2].second = 2;
         v[3].first = abs(A[i].second.first - (A[i].second.second - 1)), v[3].second = 3;
         sort(v.begin(), v.end());
         if(v[0].second == 0){
            A[i].second.first++;
            k1 --;
         }else if(v[0].second == 1){
            A[i].second.first--;
            k1 --;
         }else if(v[0].second == 2){
            A[i].second.second++;
            k2 --;
         }else{
            A[i].second.second--;
            k2 --;
         }
      }else if(k1){
         vector<pair<long long, long long> > v (2);
         v[0].first = abs(A[i].second.first + 1 - A[i].second.second), v[0].second = 0;
         v[1].first = abs((A[i].second.first - 1) - A[i].second.second), v[1].second = 1;
         sort(v.begin(), v.end());
         if(v[0].second == 0){
            A[i].second.first++;
         }else {
            A[i].second.first--;
         }
         k1--;
      }else if(k2){
         vector<pair<long long, long long> > v (2);
         v[0].first = abs(A[i].second.first - (A[i].second.second + 1)), v[0].second = 2;
         v[1].first = abs(A[i].second.first - (A[i].second.second - 1)), v[1].second = 3;
         sort(v.begin(), v.end());
         if(v[0].second == 2){
            A[i].second.second++;
         }else{
            A[i].second.second--;
         }
         k2--;
      }
      A[i].first = abs(A[i].second.first - A[i].second.second);
   }
   long long ans = 0;
   for(int i = 0; i < n; ++i){
      ans += A[i].first * A[i].first;
   }
   cout << ans << "\n";
}

#include<bits/stdc++.h>
using namespace std;
int main(void){
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
    int n;
    scanf("%d", &n);
    vector<int> zombies(n), radiations(n);
    vector<int> in(n, 0), out(n, 0), caves(n, 0);
    for(int i = 0; i < n; ++i){
      scanf("%d", &radiations[i]);
      int inDegree = i - radiations[i], outDegree = i + radiations[i];
      inDegree = max(0, inDegree), outDegree = min(n - 1, outDegree);
      in[inDegree]++, out[outDegree]++;
    }
    int ongoing = 0, ans = 1;
    for(int i = 0; i < n; ++i){
      scanf("%d", &zombies[i]);
      ongoing += in[i];
      caves[i] = ongoing;
      ongoing -= out[i];
    }
    sort(zombies.begin(), zombies.end());
    sort(caves.begin(), caves.end());
    for(int i = 0; i < n; ++i){
        ans &= (caves[i] == zombies[i]);
    }
    if(ans)puts("YES");
    else puts("NO");
  }
}

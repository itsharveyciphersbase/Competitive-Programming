#include <bits/stdc++.h>

using namespace std;

int arr[200001];
int st[200001];

int main(void) {
    int n;
    scanf("%d", &n);
    vector<pair<int,int>> k (n);
    int stable = 0;
    priority_queue<pair<int,int> > q;
    for(int i = 0; i < n; ++i){
        scanf("%d", &k[i].first);
        k[i].second = i;
        if(q.empty()){
            stable ++;
            st[i] = 1;
        }else{
            if(q.top().first >= k[i].first){
                pair<int, int> tmp = q.top();
                q.pop();
                if(q.empty() || q.top().first < k[i].first){
                    arr[tmp.second]++;
                }
                q.push(tmp);
            }else{
                st[i] = 1;
                stable++;
            }
        }
        q.push(k[i]);
    }
    int maxi = -1;
    for(int i = 0; i < n; ++i){
        maxi = max(maxi, arr[i] - st[i]);
    }
    printf("%d", maxi + stable);
}

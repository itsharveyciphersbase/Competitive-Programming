#include <bits/stdc++.h>

using namespace std;
int limit[100001], last[1000001], last_pre = 0;
long long pre_past[100001];

void process(int cur_r){
    for(int i = last_pre + 1; i <= cur_r && limit[i] && limit[i] <= cur_r; ++i){
        pre_past[i] = pre_past[i - 1] + (limit[i] - i);
        last_pre = max(last_pre, i);
    }
}

int main() {
    int n, q;
    scanf("%d %d", &n, &q);
    vector<int> A(n);
    memset(last, -1, sizeof last);
    for(int A_i = 1; A_i <= n; A_i++){
       scanf("%d", &A[A_i]);
       if(last[A[A_i]] != -1){
            int i = last[A[A_i]];
            while(i > 0){
                if(limit[i] != 0)
                    break;
                limit[i] = A_i;
                --i;
            }
        }
        last[A[A_i]] = A_i;
    }
    vector<pair<pair<int, int>, int> > queries(q);
    vector<pair<int, long> > ans (q);
    for(int a0 = 0; a0 < q; a0++){
        int l, r;
        scanf("%d %d", &l, &r);
        queries[a0] = make_pair(make_pair(r, l), a0);
        // Write Your Code Here
    }
    sort(queries.begin(), queries.end());
    for(int a0 = 0; a0 < q; a0++){
        int l = queries[a0].first.second, r = queries[a0].first.first;
        process(r);
        long sum = (long)(r - max(l, last_pre + 1) + 1) * (r - max(l, last_pre + 1) + 2) / 2;
        if(last_pre >= l && last_pre <= r)
            sum += (long)(pre_past[last_pre] - pre_past[l - 1]);
        ans[a0] = make_pair(queries[a0].second, sum);
    }
    sort(ans.begin(), ans.end());
    for(int a0 = 0; a0 < q; a0++)
        printf("%ld\n", ans[a0].second);
    return 0;
}
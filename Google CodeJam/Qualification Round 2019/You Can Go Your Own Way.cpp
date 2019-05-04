#include<bits/stdc++.h>
using namespace std;

int cases = 1;
int main(void){
    int testcases;
    scanf("%d", &testcases);
    while(testcases--){
        int N;
        scanf("%d", &N);
        string inst, ans = "";
        cin >> inst;
        for(int i = 0, j = 1; i < inst.size(); ++i, ++j){
            if(inst[i] == 'E'){
                ans += 'S';
            }else ans += 'E';
        }
        cout << "Case #" << cases++ << ": " << ans << "\n";
    }
}

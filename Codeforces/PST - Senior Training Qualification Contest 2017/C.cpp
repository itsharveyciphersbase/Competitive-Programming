include<bits/stdc++.h>

using namespace std;
int cases = 1 ;
int main(void){
    freopen("delta.in", "r", stdin);
    int n, d;
    scanf("%d", &n);
    while(n--){
        string in;
        cin >> in;
        vector<int> arr (26, 0);
        for(int i = 0; i < in.size(); ++i){
            arr[in[i]-'a']++;
        }
        int odd = 0, even = 0;
        for(int i = 0; i < 26; i++)
            if(arr[i]){
                if(arr[i] % 2)odd++;
                else even++;
            }
        if(odd < 2){
            cout << "Case " << cases++ << ": YES\n";
        }else cout << "Case " << cases++ << ": NO\n";
    }
}

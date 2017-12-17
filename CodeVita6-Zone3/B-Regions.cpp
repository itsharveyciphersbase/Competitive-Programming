#include<bits/stdc++.h>

using namespace std;

char no;
map<int, int> lines;
vector<int> nums;
string input;
int st = 0;
int nt(int ii){
    for(int i = ii + 1; i < int(input.size()); ++i)
        if(input[i] == ',')
            return i;
    return int(input.size());
}
int main(void){
    int n, tmp;
    cin >> n >> input;
    for(int i = 0; i < n; ++i){
        int nn = nt(st);
        stringstream k(input.substr(st, nn - st));
        k >> tmp;
        st = nn + 1;
        if(!lines[tmp]++)
            nums.push_back(tmp);
    }
    sort(nums.begin(), nums.end());
    int base = 1;
    int ans = 1;
    for(int i = 0; i < int(nums.size()); ++i){
        ans += lines[nums[i]] * base;
        base += lines[nums[i]];
    }
    cout << ans;
}
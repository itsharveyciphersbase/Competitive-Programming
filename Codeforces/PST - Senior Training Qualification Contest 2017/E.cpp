#include<bits/stdc++.h>

using namespace std;

int cases = 1;
int n, x, z;
string in;

bool check(int a, int b, int step){
    for(int i = 1; i <= step; ++i){
        if(in[a + i] != in[b + i - 1])
            return false;
    }
    return true;
}

int main(void){
    freopen("palindrome.in", "r", stdin);
    scanf("%d", &n);
    while(n--){
        scanf("%d %d", &x, &z);
        cin >> in;
        bool G = true;
        int a = -1, b = x, steps = 0;
        while(b > a){
            steps++;
            a ++, b --;
            if(steps == z){
                G &= check(a - steps, b, steps);
                steps = 0;
            }
        }
        if(G)cout << "Case " << cases++ << ": Yes\n";
        else cout << "Case " << cases++ << ": No\n";
    }
}

#include <bits/stdc++.h>

using namespace std;
int cards[50][2], n;
long po[41];
unordered_map<long, vector<int> > p2;
int ab = INT_MAX;
string soll;

string gg(long x, int len){
    string out = bitset<20> (x).to_string();
    reverse(out.begin(), out.end());
    out = out.substr(0, len);
    return out;
}

int cu1(string in){
    int ii = 0;
    for(int i = 0; i < in.size(); ++i){
        if(in[i] == '1')
            ii++;
    }
    return ii;
}

int cu0(string in){
    int ii = 0;
    for(int i = 0; i < in.size(); ++i){
        if(in[i] == '0')
            ii++;
    }
    return ii;
}

void pro1(){
    int len = (n / 2)+ (n % 2 != 0);
    for(int i = 0; i <= po [len]; ++i){
        long sum1 = 0, sum2 = 0;
        for(int j = 0; j < len; ++j){
            if((1 << j) & i)
                sum2 += cards[j][1];
            else sum1 += cards[j][0];
        }
        for(int k : p2[(sum2 - sum1)]){
            string sol = gg(i, len) + gg(k, n / 2);
            int c0 = n, c1 = cu1(sol);
            c0 -= c1;
            if(abs(c0 - c1) < ab){
                soll = sol;
                ab = abs(cu0(sol) - cu1(sol));
                if(ab == 0)
                    return;
            }
        }
    }

}

void pro2(){
    int len = (n / 2);
    int push = (n / 2) + (n % 2 != 0);
    for(int i = 0; i <= po[len]; ++i){
        long sum1 = 0, sum2 = 0;
        for(int j = 0; j < len; ++j){
            if((1 << j) & i)
                sum2 += cards[push + j][1];
            else sum1 += cards[push + j][0];
        }
        p2[sum1 - sum2].push_back(i);
    }
}

int main(void) {
    po[0] = 1;
    for(int i = 1; i <= 40 ; ++i){
        po[i] = po[i - 1] * 2;
    }
    scanf("%d", &n);
    for(int i = 0; i < n; ++i){
        scanf("%d %d", &cards[i][0], &cards[i][1]);
    }
    pro2();
    pro1();
    if(ab != INT_MAX){
        cout << soll << "\n";
    }else puts("-1");
}
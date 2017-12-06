#include<bits/stdc++.h>

using namespace std;

string f0 = "What are you doing at the end of the world? Are you busy? Will you save us?";
string rp1 = "What are you doing while sending ";
string rp2 = "? Are you busy? Will you send ";
string rp3 = "?";
// string f1 = "What are you doing while sending (f0)? Are you busy? Will you send (f0)?";
char trace(int f, long long k){
    if(!f){
        if(k > f0.size())
            return '.';
        else
            f0[k - 1];
    }
    //rp1
    if(k <= rp1.size()){
        return rp1[k - 1];
    }else k -= rp1.size();
    //""
    //call(f - 1)
    //""
    //rp2
    //""
    //call(f - 1)
    //""
    //rp3 
}

int main(void){
    int q;
    scanf("%d", &q);
    while(q--){
        int n;
        long long k;
        cin >> n >> k;
        putchar(trace(n, k));
    }
}
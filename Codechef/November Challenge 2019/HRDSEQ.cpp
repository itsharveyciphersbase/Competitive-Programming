#include <bits/stdc++.h>
using namespace std;
int lastOccurrence[129], seq[129], Occurrences[129], snapShotOfOccurrences[129], n, testcases;
int main(void) {
    memset(lastOccurrence, -1, sizeof lastOccurrence);
    for(int i = 0; i < 129; ++i){
        if(lastOccurrence[seq[i]] != -1){
            seq[i + 1] = i - lastOccurrence[seq[i]];
        }else {
            seq[i + 1] = 0;
        }
        Occurrences[seq[i]] ++;
        snapShotOfOccurrences[i] = Occurrences[seq[i]];
        lastOccurrence[seq[i]] = i;
    }
    scanf("%d", &testcases);
    while(testcases--){
        scanf("%d", &n);
        printf("%d\n", snapShotOfOccurrences[n - 1]);
    }
}


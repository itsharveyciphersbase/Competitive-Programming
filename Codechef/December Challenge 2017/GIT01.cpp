#include<bits/stdc++.h>

using namespace std;
char grid[101][101];

int main(void){
    int testcases;
    scanf("%d", &testcases);
    while(testcases--){
        int n, m;
        scanf("%d %d", &n, &m);
        for(int i = 0; i < n; ++i){
            scanf("%s", grid[i]);
        }
        int nextGREEN, nextRED;
        int counG = 0, counR = 0;
        for(int i = 0; i < n; ++i){
            if(i % 2)
                nextGREEN = 0;
            else nextGREEN = 1;
            if(i % 2)
                nextRED = 0;
            else nextRED = 1;
            for(int j = 0; j < m; ++j){
                if(nextGREEN){
                    if(grid[i][j] == 'R')counG += 5;
                    nextGREEN = 0;
                }else{
                    if(grid[i][j] == 'G')counG += 3;
                    nextGREEN = 1;
                }
                if(nextRED){
                    if(grid[i][j] == 'G')counR += 3;
                    nextRED = 0;
                }else{
                    if(grid[i][j] == 'R')counR += 5;
                    nextRED = 1;
                }
            }
        }
        printf("%d\n", min(counG, counR));
    }
}
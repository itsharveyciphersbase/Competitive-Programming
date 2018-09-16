#include<bits/stdc++.h>
using namespace std;

char grid[201][201];
int memH[201][201], memV[201][201], cases = 1;

int main(void){
   freopen("abdelrahman.in", "r", stdin);
   int testcases;
   scanf("%d", &testcases);
   while(testcases--){
      memset(memV, 0, sizeof memV);
      memset(memH, 0, sizeof memH);
      int n, m;
      scanf("%d %d", &n, &m);
      for(int i = 0; i < n; ++i){
         cin >> grid[i];
      }
      int count = 0;
      for(int i = 0; i < n; ++i){
         for(int j = 0; j < m; ++j){
            if(grid[i][j] == 'H')count++;
            if(grid[i][j] == 'T' || j == m - 1){
               // cout << i << " " << j << "  ---- " << count << endl;
               int tmp = j - (grid[i][j] == 'T');
               while(tmp > -1){
                  if(grid[i][tmp] == 'T')break;
                  memH[i][tmp--] = count;
               }
               count = 0;
            }
         }
      }
      for(int i = 0; i < m; ++i){
         for(int j = 0; j < n; ++j){
            if(grid[j][i] == 'V')count++;
            if(grid[j][i] == 'T' || j == n - 1){
               // cout << i << " " << j << "  --++-- " << count << endl;
               int tmp = j - (grid[j][i] == 'T');
               while(tmp > -1){
                  if(grid[tmp][i] == 'T')break;
                  memV[tmp--][i] = count;
               }
               count = 0;
            }
         }
      }
      int maxI = 0, maxJ = 0, maxC = 0;
      for(int i = 0; i < n; ++i){
         for(int j = 0; j < m; ++j){
            // cout << i << " " << j << "  ...... " << memV[i][j] << " " << memH[i][j] << endl;
            if(grid[i][j] != 'T'){
               int here = memV[i][j] + memH[i][j];
               if(here > maxC){
                  maxI = i, maxJ = j;
                  maxC = here;
               }else if(here == maxC && i > maxI){
                  maxI = i, maxJ = j;
               }else if(here == maxC && i == maxI && j > maxJ){
                  maxI = i, maxJ = j;
               }
            }
         }
      }
      printf("Case %d: %d %d %d\n", cases++, maxC, maxI, maxJ);
   }
}

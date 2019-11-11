#include<bits/stdc++.h>

using namespace std;
char grid[3][3][3][3];
int main(void){
  // i line
  for(int i = 0; i < 3; ++i)
    for(int k = 0; k < 3; ++k)
      for(int rp = 0; rp < 3; ++rp)
        for(int j = 0; j < 3; ++j)
          cin >> grid[i][rp][k][j];
  int x, y;
  cin >> x >> y;
  int mtX = x % 3, mtY = y % 3;
  if(!mtX)mtX += 3;
  if(!mtY)mtY += 3;
  mtX --, mtY --;
  bool found = false;
  for(int i = 0; i < 3; ++i)
    for(int k = 0; k < 3; ++k)
      if(grid[mtX][mtY][i][k] == '.'){
        found = true;
        break;
      }
    for(int i = 0; i < 3; ++i){
      for(int k = 0; k < 3; ++k){
        for(int rp = 0; rp < 3; ++rp){
          for(int j = 0; j < 3; ++j){
            if(found){
              if((mtX == i) && (mtY == rp)){
                if(grid[i][rp][k][j] == '.')cout << "!";
                else cout << grid[i][rp][k][j];
              }else{
                cout << grid[i][rp][k][j];
              }
            }else{
              if(grid[i][rp][k][j] == '.')cout << "!";
              else cout << grid[i][rp][k][j];
            }
          }
          cout << " ";
        }
        cout << "\n";
      }
      cout << "\n";
    }
}

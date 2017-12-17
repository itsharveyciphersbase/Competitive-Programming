#include<bits/stdc++.h>

using namespace std;

int cases = 1;
int n;
string in;
int pre[30000];
int ind[32][13][2052];

int nextDay(int x){
    x ++;
    return x %= 7;
}
int nextM(int x){
    if(x == 12)
        return 1;
    else return x + 1;
}

bool lea(int year){
    if (year % 4 == 0){
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                return true;
            else
                return false;
        }
        else
            return true;
    } else
        return false;
}

int arr [] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


int main(void){
    int day = 4, d = 31, m = 12, year = 1969;
    int leap = 1;
    int i;
    for(i = 0; year < 2052; ++i){
        ind[d][m][year] = i;
        if(i > 0)
            pre[i] = pre[i - 1] + (day == 6 && d == 13);
        if(d == arr[m] && m == 2 && lea(year)){
            d++;
        }else if(d >= arr[m]){
            d = 1;
            m = nextM(m);
            if(m == 1)
                leap++, year++;
            if(leap == 5)
                leap = 1;
        }else{
            d++;
        }
        day = nextDay(day);
    }
    freopen("friday.in", "r", stdin);
    scanf("%d", &n);
    int a, b, c, x, y, z;
    while(n--){
        scanf("%d/%d/%d - %d/%d/%d", &a, &b, &c, &x, &y, &z);
        if(a == 1 && b == 1)
            a = 31, b = 12,  c--;
        else if(a == 1){
                b--;
                a = arr[b] + (b == 2 && lea(c));
            }
        else a --;
        if(pre[ind[x][y][z]] - pre[ind[a][b][c]])
            printf("Friday the 13th occurs %d time(s) throughout Loubna's career.\n",  pre[ind[x][y][z]] - pre[ind[a][b][c]]);
            else puts("Loubna is so unlucky, Friday the 13th doesn't occur throughout her career.");
    }
}

#include<bits/stdc++.h>

using namespace std;
char penalties[20];

int main(void){
    while(scanf("%20s", penalties) != EOF){
        int A = 0, B = 0, _A = 5, _B = 5;
        bool done = false;
        for(int i = 1; i <= 10; ++i){
            if(i % 2)
                A += penalties[i - 1] - '0', _A--;
            else
                B += penalties[i - 1] - '0', _B--;
            
            if(A > B && B + _B < A){
                done = true;
                printf("TEAM-A %d\n", i);
                break;
            }else if(A < B && A + _A < B){
                done = true;
                printf("TEAM-B %d\n", i);
                break;
            }
        }
        for(int i = 1; i <= 10 && !done; ++i){
            if(i % 2)
                A += penalties[10 + i - 1] - '0';
            else
                B += penalties[10 + i - 1] - '0';
            if(!(i % 2)){
                if(A > B){
                    done = true;
                    printf("TEAM-A %d\n", i + 10);
                    break;
                }else if(B > A){
                    done = true;
                    printf("TEAM-B %d\n", i + 10);
                    break;
                }
            }
        }
        if(!done)
            puts("TIE"); 
    }
}